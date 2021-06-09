# include "ClapTrap.hpp"

	/* Constructor */
ClapTrap::ClapTrap(std::string name) 
{
	this->_name  = name;
	this->_HitPoint = 100;
	this->_MaxHitPoint = 100;
	this->_EnergyPoint = 100;
	this->_MaxEnergyPoint = 100;
	this->_Level = 1;
	this->_MelleAttactDamage = 30;
	this->_RangedAttactDamage = 20;
	this->_ArmorDamageReduction = 5;
	std::cout << F_YELLOW;
	std::cout << "ClapTrap: I was born🐣" << std::endl;
	std::cout << "ClapTrap: My name  " << this->_name << std::endl;
	std::cout << F_NONE;
}

ClapTrap::ClapTrap(unsigned int hp, unsigned int maxhp,  unsigned int RangeAttack, unsigned int ArmorDamageReduction) 
{
	this->_HitPoint = hp;
	this->_MaxHitPoint = maxhp;
	this->_RangedAttactDamage = RangeAttack;
	this->_ArmorDamageReduction = ArmorDamageReduction;
	std::cout << F_YELLOW;
	std::cout << "ClapTrap: I was born🐣" << std::endl;
	std::cout << F_NONE;
}

ClapTrap::ClapTrap()
{
	std::cout << F_YELLOW;
	std::cout << "ClapTrap: I was born🐣" << std::endl;
	//std::cout << "ClapTrap: My name  " << this->_name << std::endl;
	std::cout << F_NONE;
}


	/* Destructor */

ClapTrap::~ClapTrap()
{
	std::cout << RED;
	std::cout << "ClapTrap: I'm dead💀" << std::endl;
	std::cout << F_NONE;
}

	/* OVERLOAD OPERATOR = */

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << GREEN;
	std::cout << "ClapTrap: Assignation operator called" << std::endl;
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

ClapTrap ::ClapTrap(const ClapTrap &obj)
{
	*this = obj;
	std::cout << GREEN;
	std:: cout << "ClapTrap: Call copy constructor\n";
	std::cout << F_NONE;
}

void ClapTrap::rangedAttack(std::string const & target)
{
	 /* FR4G-TP <name> attacks <target> at range, causing <damage> points of damage! */

	std::cout << RED;
	std::cout << "ClapTrap: " << this->_name 
	<< " Attacks💥 " 
	<< target 
	<< " at range, causing " 
	<< this->_RangedAttactDamage - this->_ArmorDamageReduction 
	<< " points of damage!\n";
	std::cout << F_NONE; 
}

void ClapTrap::meleeAttack(std::string const & target)
{
	std::cout << RED;
	std::cout << "ClapTrap: " << this->_name 
	<< " Attacks💥 " 
	<< target 
	<< " at range, causing " 
	<< this->_MelleAttactDamage - this->_ArmorDamageReduction 
	<< " points of damage!\n";
	std::cout << F_NONE; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((amount - this->_ArmorDamageReduction) < 0)
	{
		std::cout << GREEN;
		std::cout << "ClapTrap: " << "Armor saved you 🌫" << std::endl;
		std::cout << F_NONE;
		return;
	}
	if (amount > this->_HitPoint + this->_ArmorDamageReduction)
	{
		std::cout << RED;
		std::cout << "ClapTrap: " << this->_name << " take " << this->_HitPoint << " damage💥" << std::endl;
		std::cout << F_NONE;
		this->_HitPoint  = 0;
	}
	else
	{
		std::cout << RED;
		std::cout << "ClapTrap: " << this->_name << " take " << (amount - this->_ArmorDamageReduction) << " damage💥" << std::endl;
		std::cout << F_NONE;
		this->_HitPoint  =  this->_HitPoint - (amount - this->_ArmorDamageReduction);
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_HitPoint > this->_MaxHitPoint)
	{
		std::cout << GREEN;
		std::cout << this->_name << "ClapTrap: Reapired in " << this->_MaxHitPoint - this->_HitPoint << " hit!" << std::endl;
		std::cout <<F_NONE;
		this->_HitPoint = this->_MaxHitPoint;
	}
	else
	{
		std::cout << GREEN;
		std::cout << this->_name << "ClapTrap: Reapired in " << amount << " hit!" << std::endl;
		std::cout <<F_NONE;
		this->_HitPoint = this->_MaxHitPoint + amount;
	}
}

const std::string ClapTrap::getName() const
{
	return(this->_name);
}

unsigned int ClapTrap::getMeleeAttackDamage() const {
	return this->_MelleAttactDamage;
}

unsigned int ClapTrap::getRangedAttackDamage() const {
	return this->_RangedAttactDamage;
}

unsigned int ClapTrap::getEnergyPoints() const
{
	return (this->_EnergyPoint);
}