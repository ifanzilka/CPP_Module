#include "SuperTrap.hpp"


	/*Constructor */
SuperTrap::SuperTrap(std::string name) :   FragTrap(100, 100, 20, 5), NinjaTrap(120, 120, 60)
{
	// this->_HitPoint = FragTrap::_HitPoint;
	// this->_MaxHitPoint = FragTrap::_MaxHitPoint;
	// this->_Level = 1;
	// this->_RangedAttactDamage = FragTrap::_RangedAttactDamage;
	// this->_ArmorDamageReduction = FragTrap::_ArmorDamageReduction;
	// this->_EnergyPoint = NinjaTrap::_EnergyPoint;
	// this->_MaxEnergyPoint = NinjaTrap::_MaxEnergyPoint;
	// this->_MelleAttactDamage = NinjaTrap::_MelleAttactDamage;

	this->_name = name;
	this->_Level  = 1;
	std::cout << GREEN;
	std::cout << "SuperTrap: Call constructor  \n";
	std::cout << F_NONE;

	std::cout << "Parametrs:\n";
	std::cout << "Hp: " << this->_HitPoint << std::endl;
	std::cout << "MaxHp: " << this->_MaxHitPoint << std::endl;
	std::cout << "Lvl: " << this->_Level << std::endl;
	std::cout << "RangeAttactDamage: " << this->_RangedAttactDamage << std::endl;
	std::cout << "ArmorDamageReduction: " << this->_ArmorDamageReduction << std::endl;
	std::cout << "EnergyPoint: " << this->_EnergyPoint << std::endl;
	std::cout << "MaxEnergyPoint: " << this->_MaxEnergyPoint << std::endl;
	std::cout << "MelleAttackDamage: " << this->_MelleAttactDamage << std::endl;
}

	/*Destructor */
SuperTrap::~SuperTrap()
{
	std::cout << RED;
	std::cout << "SuperTrap: I'm dead💀" << std::endl;
	std::cout << F_NONE;
}

		/* Copy constructor */
SuperTrap::	SuperTrap(const SuperTrap &other) : ClapTrap(other)
{
	std::cout << GREEN;
	std::cout << "SuperTrap: Call copy constructor\n";
	std::cout << F_NONE;
}

	/* OVERLOAD OPERATOR = */
SuperTrap& SuperTrap::operator=(const SuperTrap &obj)
{
	ClapTrap::operator=(obj);
	std::cout << GREEN;
	std::cout << "SuperTrap: Call operator=\n";
	std::cout << F_NONE;
	return *this;
}
