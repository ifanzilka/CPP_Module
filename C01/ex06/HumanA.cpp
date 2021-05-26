#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << GREEN;
	std::cout << "Human: " << name << " Weapon: " << weapon.getType() << "is ready!\n";
	std::cout << F_NONE;
}

HumanA::~HumanA()
{
	std::cout << RED;
	std::cout << "Human: " << _name << " Weapon: " << _weapon.getType() << "is dead!\n";
	std::cout << F_NONE;
}


	/*Methods*/

void	HumanA::attack(void)
{
	std::cout << RED << this->_name << F_NONE << " attacks with his ";
	std::cout << GREEN << this->_weapon.getType() <<  F_NONE << std::endl;
}	