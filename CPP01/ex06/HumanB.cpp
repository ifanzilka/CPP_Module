#include "HumanB.hpp"

HumanB::HumanB(const std::string name)
{
	this->_name = name;
	std::cout << GREEN;
	std::cout << "Human: " << name << " Weapon: " << "NULL" << " is ready!\n";
	std::cout << F_NONE;
}

HumanB::~HumanB()
{
	std::cout << RED;
	std::cout << "Human: " << _name << " Weapon: " << this->_weapon->getType() << "is dead!\n";
	std::cout << F_NONE;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void)
{
	std::cout << RED << this->_name << F_NONE << " attacks with his ";
	std::cout << GREEN << this->_weapon->getType() <<  F_NONE << std::endl;
}	