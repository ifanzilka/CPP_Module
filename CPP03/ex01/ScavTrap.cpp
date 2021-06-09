#include "ScavTrap.hpp"

	/* Constructor */

ScavTrap::ScavTrap(std::string name)
{
	this->_name  = name;
	this->_HitPoint = 100;
	this->_MaxHitPoint = 100;
	this->_EnergyPoint = 50;
	this->_MaxEnergyPoint = 50;
	this->_Level = 1;
	this->_MelleAttactDamage = 20;
	this->_RangedAttactDamage = 15;
	this->_ArmorDamageReduction = 3;
	std::cout << F_YELLOW;
	std::cout << "I was born🐣" << std::endl;
	std::cout << "My name  " << this->_name << std::endl;
	std::cout << F_NONE;
}

ScavTrap::ScavTrap()
{
	this->_name  = "bi-bi🤖";
	this->_HitPoint = 100;
	this->_MaxHitPoint = 100;
	this->_EnergyPoint = 50;
	this->_MaxEnergyPoint = 50;
	this->_Level = 1;
	this->_MelleAttactDamage = 20;
	this->_RangedAttactDamage = 15;
	this->_ArmorDamageReduction = 3;
	std::cout << F_YELLOW;
	std::cout << "ST: I was born........)🐣" << std::endl;
	std::cout << "ST: My name - " << this->_name << std::endl;
	std::cout << F_NONE;
}

	/* Destructor */

ScavTrap::~ScavTrap()
{
	std::cout << RED;
	std::cout << "ST: I'm dead💀" << std::endl;
	std::cout << F_NONE;
}

/* OVERLOAD OPERATOR = */

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << GREEN;
	std::cout << "Assignation operator called" << std::endl;
	std::cout << F_NONE;
	if (this == &obj)
	{
		return (*this);
	}
	this->_name  = obj.getName();			
	this->_HitPoint = obj._HitPoint;
	this->_MaxHitPoint = obj._MaxHitPoint;
	this->_EnergyPoint = obj._EnergyPoint;
	this->_MaxEnergyPoint = obj._MaxEnergyPoint;
	this->_Level = obj._Level;
	this->_MelleAttactDamage = obj._MelleAttactDamage;
	this->_RangedAttactDamage = obj._RangedAttactDamage;
	this->_ArmorDamageReduction = obj._ArmorDamageReduction;
	return (*this);
}	


	/* Copy Constructor */

ScavTrap ::ScavTrap(const ScavTrap &obj)
{
	*this = obj;
	//std:: cout << "Call copy constructor\n";
}

	/* Methods */

void	ScavTrap::setName(std::string name)
{
	this->_name = name;
}

const std::string ScavTrap::getName() const
{
	return(this->_name);
}

void ScavTrap::rangedAttack(std::string const & target)
{
	 /* FR4G-TP <name> attacks <target> at range, causing <damage> points of damage! */

	std::cout << RED;
	std::cout << "ST: " << this->_name 
	<< " Attacks💥 " 
	<< target 
	<< " at range, causing " 
	<< this->_RangedAttactDamage - this->_ArmorDamageReduction 
	<< " points of damage!\n";
	std::cout << F_NONE; 
}

void ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << RED;
	std::cout << "ST: " << this->_name 
	<< " Attacks💥 " 
	<< target 
	<< " at range, causing " 
	<< this->_MelleAttactDamage - this->_ArmorDamageReduction 
	<< " points of damage!\n";
	std::cout << F_NONE; 
}

void ScavTrap::takeDamage(unsigned int amount)
{
	if ((amount - this->_ArmorDamageReduction) < 0)
	{
		std::cout << GREEN;
		std::cout << "ST: " << "Armor saved you 🌫" << std::endl;
		std::cout << F_NONE;
		return;
	}
	if (amount > this->_HitPoint + this->_ArmorDamageReduction)
	{
		std::cout << RED;
		std::cout << "ST: " << this->_name << " take " << this->_HitPoint << " damage💥" << std::endl;
		std::cout << F_NONE;
		this->_HitPoint  = 0;
	}
	else
	{
		std::cout << RED;
		std::cout << "ST: " << this->_name << " take " << (amount - this->_ArmorDamageReduction) << " damage💥" << std::endl;
		std::cout << F_NONE;
		this->_HitPoint  =  this->_HitPoint - (amount - this->_ArmorDamageReduction);
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_HitPoint > this->_MaxHitPoint)
	{
		std::cout << GREEN;
		std::cout << this->_name << "ST: Reapired in " << this->_MaxHitPoint - this->_HitPoint << " hit!" << std::endl;
		std::cout <<F_NONE;
		this->_HitPoint = this->_MaxHitPoint;
	}
	else
	{
		std::cout << GREEN;
		std::cout << this->_name << "ST: Reapired in " << amount << " hit!" << std::endl;
		std::cout <<F_NONE;
		this->_HitPoint = this->_MaxHitPoint + amount;
	}
}

void ScavTrap::challengeNewcomer() const {
	std::string	screams[5] = {"Uh, how do I cast magic missile?",
								  "Do not look behind my curtain!",
								  "I'm made of magic!",
								  "You can call me Gundalf!",
								  "Avada kedavra!"};
	int rand_scream = rand() % 5;
	std::cout 	<< "ST: " <<  "\"" << _name << "\""  << ": " << screams[rand_scream] << std::endl;
}

unsigned int ScavTrap::getMeleeAttackDamage() const {
	return this->_MelleAttactDamage;
}

unsigned int ScavTrap::getRangedAttackDamage() const {
	return this->_RangedAttactDamage;
}
