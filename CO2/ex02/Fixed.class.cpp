#include "Fixed.class.hpp"

/* Constrictor */

Fixed::		Fixed(void)
{
	this->_value = 0;
	std::cout << GREEN;
	std::cout << "Default constructor called" << std::endl;
	std::cout << F_NONE;
}

	/*Constructor EXAMPLE*/
	/* num = 42 
	** val = 42 << 8  (offset = 8)
	** _val = 10752
	** val = 10 << 8 (offset 8)
	** _val = 2560
	*/

Fixed::	Fixed(int const val)
{
	std::cout << GREEN;
	std::cout << "Int constructor called" << std::endl;
	std::cout << F_NONE;
	this->_value = (val << Fixed::_offset);
}

	/*Constructor EXAMPLE*/
	/* num = 1234.43
	** val = 1234.43 * (1 << 8)  (offset = 8) == 1234.43 * 256
	** _val = 316015
	** val = 10 << 8 (offset 8)
	** _val = 2560
	*/

Fixed::Fixed(float const val)
{	
	std::cout << GREEN;
	std::cout << "Float constructor called" << std::endl;
	std::cout << F_NONE;
	// std:: cout << (val * (1 << Fixed::_offset))<< std::endl;;
	this->_value = roundf(val * (1 << Fixed::_offset));
	//std::cout << _value;
}


/* Copy constructor */

Fixed::		Fixed(const Fixed &obj)
{
	std::cout << GREEN;
	//std::cout << "Copy constructor called!" << std::endl;
	std::cout << F_NONE;
	this->_value = obj.getRawBits();
	//*this = obj;
}

/* Destructor */

Fixed::~Fixed(void)
{
	std::cout << RED;
	//std::cout << "Destructor called!\n";
	std::cout << F_NONE;

}

/*Methods*/

int 	Fixed::getRawBits(void) const
{
	std::cout << GREEN;
	//std::cout << "getRawBits member function called" << std::endl;
	std::cout << F_NONE;
	return (this->_value);
}

void 	Fixed::setRawBits(int const raw)
{
	std::cout << GREEN;
	std::cout << "setRawBits member function called" << std::endl;
	std::cout << F_NONE;
	this->_value = raw;
}

/*
That converts the fixed point
value to a floating point value.
*/

float::	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << Fixed::_offset));
}

/*
That converts the fixed point value
to an integer value.
*/

/*EXAMPLE*/
/* num = 316015
** val = 316015  >> 8)  (offset = 8) == 316015 /  2 ^ 8
** _val = 1234
*/

int::	Fixed::toInt(void) const
{
	return (this->_value >> Fixed::_offset);
}

/* Operation overload = */

Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << GREEN;
	std::cout << "Assignation operator called" << std::endl;
	std::cout << F_NONE;
	this->_value = obj.getRawBits();
	return (*this);
}


/* bool operators*/

bool Fixed::operator>(Fixed const &other) const 
{
	return (this->getRawBits() > other.getRawBits());
}

bool Fixed::operator<(Fixed const &other) const 
{
	return (this->getRawBits() < other.getRawBits());
}

bool Fixed::operator>=(Fixed const &other) const
{
	return (this->getRawBits() >= other.getRawBits());
}

bool Fixed::operator<=(Fixed const &other) const
{
	return (this->getRawBits() <= other.getRawBits());
}

bool Fixed::operator==(Fixed const &other) const
{
	return (this->getRawBits() == other.getRawBits());
}

bool Fixed::operator!=(Fixed const &other) const
{
	return (this->getRawBits() != other.getRawBits());
}

/*Operator '+' '-' '*' '/' */

Fixed Fixed::operator+(Fixed const &other)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() + other.getRawBits());
	return (val);
}

Fixed Fixed::operator-(Fixed const &other)
{
	Fixed val(*this);

	val.setRawBits(this->getRawBits() - other.getRawBits());
	return (val);
}

Fixed Fixed::operator*(Fixed const &other)
{
	Fixed val(*this);

	val.setRawBits(((long)this->getRawBits() * (long)other.getRawBits()) / (1 << Fixed::_offset));
	return (val);
}

Fixed Fixed::operator/(Fixed const &other)
{
	Fixed val(*this);

	val.setRawBits(((long)this->getRawBits() * (1 << Fixed::_offset)) / (long)other.getRawBits());
	return (val);
}




/* Overload operaror inc / dic */

Fixed Fixed::operator++()
{
	this->_value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed Fixed::operator--()
{
	this->_value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}



/* Operation overload << */

std::ostream& operator<< (std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return (out);
}


/* min max*/


Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	if (a > b)
		return (b);
	return (a);
}


Fixed const &Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}


const int Fixed::_offset = 8;
