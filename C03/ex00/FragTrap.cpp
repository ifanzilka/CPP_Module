#include "FragTrap.hpp"

	/* Constructor */

FragTrap::FragTrap(std::string name)
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
	std::cout << "I was born🐣" << std::endl;
	std::cout << "My name  " << this->_name << std::endl;
	std::cout << F_NONE;
}

FragTrap::FragTrap()
{
	this->_name  = "R2-D2🤖";
	this->_HitPoint = 100;
	this->_MaxHitPoint = 100;
	this->_EnergyPoint = 100;
	this->_MaxEnergyPoint = 100;
	this->_Level = 1;
	this->_MelleAttactDamage = 30;
	this->_RangedAttactDamage = 20;
	this->_ArmorDamageReduction = 5;
	std::cout << F_YELLOW;
	std::cout << "I was born🐣" << std::endl;
	std::cout << "My name - " << this->_name << std::endl;
	std::cout << F_NONE;
}


	/* Destructor */

FragTrap::~FragTrap()
{
	std::cout << RED;
	std::cout << "I'm dead💀" << std::endl;
	std::cout << F_NONE;
}

	/* OVERLOAD OPERATOR = */

FragTrap& FragTrap::operator=(const FragTrap &obj)
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

FragTrap ::FragTrap(const FragTrap &obj)
{
	*this = obj;
	//std:: cout << "Call copy constructor\n";
}	

  	/* Methods */

void	FragTrap::setName(std::string name)
{
	this->_name = name;
}

const std::string FragTrap::getName() const
{
	return(this->_name);
}

void FragTrap::rangedAttack(std::string const & target)
{
	 /* FR4G-TP <name> attacks <target> at range, causing <damage> points of damage! */

	std::cout << RED;
	std::cout << this->_name 
	<< " Attacks💥 " 
	<< target 
	<< " at range, causing " 
	<< this->_RangedAttactDamage - this->_ArmorDamageReduction 
	<< " points of damage!\n";
	std::cout << F_NONE; 
}

void FragTrap::meleeAttack(std::string const & target)
{
	std::cout << RED;
	std::cout << this->_name 
	<< " Attacks💥 " 
	<< target 
	<< " at range, causing " 
	<< this->_MelleAttactDamage - this->_ArmorDamageReduction 
	<< " points of damage!\n";
	std::cout << F_NONE; 
}

void FragTrap::takeDamage(unsigned int amount)
{
	if ((amount - this->_ArmorDamageReduction) < 0)
	{
		std::cout << GREEN;
		std::cout << "Armor saved you 🌫" << std::endl;
		std::cout << F_NONE;
		return;
	}
	if (amount > this->_HitPoint + this->_ArmorDamageReduction)
	{
		std::cout << RED;
		std::cout << this->_name << " take " << this->_HitPoint << " damage💥" << std::endl;
		std::cout << F_NONE;
		this->_HitPoint  = 0;
	}
	else
	{
		std::cout << RED;
		std::cout << this->_name << " take " << (amount - this->_ArmorDamageReduction) << " damage💥" << std::endl;
		std::cout << F_NONE;
		this->_HitPoint  =  this->_HitPoint - (amount - this->_ArmorDamageReduction);
	}
}

void FragTrap::beRepaired(unsigned int amount)
{
	if (amount + this->_HitPoint > this->_MaxHitPoint)
	{
		std::cout << GREEN;
		std::cout << this->_name << " Reapired in " << this->_MaxHitPoint - this->_HitPoint << " hit!" << std::endl;
		std::cout <<F_NONE;
		this->_HitPoint = this->_MaxHitPoint;
	}
	else
	{
		std::cout << GREEN;
		std::cout << this->_name << " Reapired in " << amount << " hit!" << std::endl;
		std::cout <<F_NONE;
		this->_HitPoint = this->_MaxHitPoint + amount;
	}
}

void	FragTrap:: vaulthunter_dot_exe(std::string const & target)
{
	sleep(1);
	srand(time(0));
	std::string attacks[15] = {"This time it'll be awesome, I promise!",
							  "Hey everybody, check out my package!",
							  "Place your bets!",
							  "Defragmenting!",
							  "Recompiling my combat code!",
							  "Running the sequencer!",
							  "It's happening... it's happening!",
							  "It's about to get magical!",
							  "Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!",
							  "Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY!",
							  "Some days, you just can't get rid of an obscure pop-culture reference.",
							  "Kill, reload! Kill, reload! KILL! RELOAD!",
							  "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!",
							  "All burn before the mighty Siren-trap!",
							  "It's time to phase you suckers out!"
							  };
	int rand_attack = rand() % 15;
	if (this->_EnergyPoint >= 25)
	{
		std::cout << CYANE;
		std::cout << _name  << ": " << "are you ready" " " << target << ": ??? \n";
		std::cout << attacks[rand_attack] << std::endl;
		std::cout << F_NONE;
		this->_EnergyPoint -= 25;
	}
	else
	{
		std::cout << RED;
		std::cout << _name << ": " << "Oh, oh... Sorry 😞" "\"" << target << "\". ";
		std::cout << "I`m no more shots left!" << std::endl;
		std::cout << F_NONE;
	}
}

unsigned int FragTrap::getMeleeAttackDamage() const {
	return this->_MelleAttactDamage;
}

unsigned int FragTrap::getRangedAttackDamage() const {
	return this->_RangedAttactDamage;
}