#include "Fixed.class.hpp"


/* Constrictor */

Fixed::		Fixed(void)
{
	this->_value = 0;
	std::cout << GREEN;
	std::cout << "Default constructor called" << std::endl;
	std::cout << F_NONE;
}

/* Copy constructor */

Fixed::		Fixed(const Fixed &obj)
{
	std::cout << GREEN;
	std::cout << "Copy constructor called!" << std::endl;
	std::cout << F_NONE;
	this->_value = obj.getRawBits();
	//*this = obj;
}

/* Destructor */

Fixed::~Fixed(void)
{
	std::cout << RED;
	std::cout << "Destructor called!\n";
	std::cout << F_NONE;

}

int 	Fixed::getRawBits(void) const
{
	std::cout << GREEN;
	std::cout << "getRawBits member function called" << std::endl;
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

/* Operation overload = */

Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << GREEN;
	std::cout << "Assignation operator called" << std::endl;
	std::cout << F_NONE;
	this->_value = obj.getRawBits();
	return (*this);
}


const int Fixed::_offset = 8;
