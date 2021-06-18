#include "AMateria.hpp"

/* Constructor */

AMateria::AMateria(std::string const &type) : _xp(0), _type(type)
{
	std::cout << GREEN;
	std::cout << "AMateria constructor call!" << std::endl;
	std::cout << F_NONE;
}

/* Destructor */
AMateria::~AMateria()
{
	std::cout << RED;
	std::cout << "AMateria destructor call!" << std::endl;
	std::cout << F_NONE;	
}

/* Overlaod copy constructor */
AMateria::AMateria(const AMateria & copy)
{
	*this = copy;
}

/* Overlaod operator= */
AMateria & AMateria::operator=(const AMateria & obj)
{
	if (this == &obj)
		return (*this);
	this->_xp = obj.getXP();
	this->_type = obj.getType();
	return (*this);
}

/* Methods */

unsigned int AMateria::getXP(void) const  
{
	return (this->_xp);
}

std::string const &AMateria::getType(void) const 
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void) target;
	std::cout << "AMateria use\n";
	this->_xp += 10;
}