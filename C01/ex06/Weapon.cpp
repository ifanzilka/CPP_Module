#include "Weapon.hpp"

Weapon::Weapon(const std::string &type)
{
	this->_type = type;
	std::cout << GREEN;
	std::cout << this->_type << F_NONE <<" ready." << std::endl;
	std::cout << F_NONE;
}

Weapon::~Weapon()
{
	std::cout << RED;
	std::cout << this->_type << F_NONE <<" weapon is broken." << std::endl;
	std::cout << F_NONE;
}

			/*Seters*/
void Weapon::setType(const std::string &type)
{
	this->_type = type;
}

			/*Geters*/
const std::string&	Weapon::getType(void) const
{
	return (this->_type);
}