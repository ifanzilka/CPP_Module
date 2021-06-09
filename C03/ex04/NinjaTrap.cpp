#include "NinjaTrap.hpp"

	/* Constructor */

NinjaTrap:: NinjaTrap() : ClapTrap ()
{

	this->_EnergyPoint = 120;
	this->_MaxEnergyPoint = 100;
	this->_MelleAttactDamage = 60;
	std::cout << F_YELLOW;
	std::cout << "NinjaTrap: I was born🐣" << std::endl;
	//std::cout << "NinjaTrap: My name  " << this->_name << std::endl;
	std::cout << F_NONE;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->_name  = name;
	this->_HitPoint = 60;
	this->_MaxHitPoint = 60;
	this->_EnergyPoint = 120;
	this->_MaxEnergyPoint = 100;
	this->_Level = 1;
	this->_MelleAttactDamage = 60;
	this->_RangedAttactDamage = 5;
	this->_ArmorDamageReduction = 0;
	std::cout << F_YELLOW;
	std::cout << "NinjaTrap: I was born🐣" << std::endl;
	std::cout << "NinjaTrap: My name  " << this->_name << std::endl;
	std::cout << F_NONE;
}

NinjaTrap:: NinjaTrap(unsigned int EnergyPoint, unsigned int MaxEnergyPoint, unsigned int MeleeAttackDamage)
{
	this->_EnergyPoint = EnergyPoint;
	this->_MaxEnergyPoint = MaxEnergyPoint;
	this->_MelleAttactDamage = MeleeAttackDamage;
	std::cout << F_YELLOW;
	std::cout << "NinjaTrap: I was born🐣" << std::endl;
	std::cout << F_NONE;

}

	/* Destructor */

NinjaTrap::~NinjaTrap()
{
	std::cout << RED;
	std::cout << "NinjaTrap: I'm dead💀" << std::endl;
	std::cout << F_NONE;
}

	/* Copy constructor */
NinjaTrap::	NinjaTrap(const NinjaTrap &other) : ClapTrap(other)
{
	std::cout << GREEN;
	std::cout << "NinjaTrap: Call copy constructor\n";
	std::cout << F_NONE;
}

	/* OVERLOAD OPERATOR = */
NinjaTrap& NinjaTrap::operator=(const NinjaTrap &obj)
{
	ClapTrap::operator=(obj);
	std::cout << GREEN;
	std::cout << "NinjaTrap: Call operator=\n";
	std::cout << F_NONE;
	return *this;
}

	/* Methods */

void NinjaTrap::ninjaShoebox(const FragTrap &fragTrap)
{
	std::cout << "NinjaTrap: Hello, my name "	<< this->_name << " \nFragTrap: My name: " << fragTrap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(const ScavTrap &scavTrap)
{
	std::cout << "NinjaTrap: Hello, my name "	<< this->_name << " \nScavTrap: My name: " << scavTrap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(const ClapTrap &clapTrap)
{
	std::cout << "NinjaTrap: Hello, my name "	<< this->_name << " \nClapTrap: My name: " << clapTrap.getName() << std::endl;
}

void NinjaTrap::ninjaShoebox(const NinjaTrap ninjaTrap)
{
	std::cout << "NinjaTrap: Hello, my name "	<< this->_name << " \nNinjaTrap: My name: " << ninjaTrap.getName() << std::endl;
}