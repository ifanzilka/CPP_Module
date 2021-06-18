#include "Character.hpp"

/* Constructor */

Character::Character(std::string const & name)
{
	this->_name = name;
	this->_actPoint = 40;
	this->_weapon = nullptr;
}

/* Destructor */

Character::~Character()
{

}

/* Copy contructor */
Character::Character(const Character &other) 
{
	*this = other;
}

/* Overload operator= */
Character &Character::operator=(const Character &other)
{
	if (this == &other)
		return *this;
	_actPoint = other._actPoint;
	_name = other._name;
	_weapon = other._weapon;
	return (*this);
}

/* Methods */
void Character::recoverAP(void)
{
	if (_actPoint + 10 >= 40)
	{
		_actPoint = 40;
	}
	else 
		_actPoint += 10;
}

void Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy *&enemy)
{
	if (this->_weapon == nullptr || enemy == nullptr || this->_actPoint < _weapon->getAPCost() || this == nullptr)
		return ;
	/* "NAME attacks ENEMY_TYPE with a WEAPON_NAME  */
	std::cout << F_YELLOW;
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << "💥💥💥" << std::endl;
	std::cout << F_NONE;
	this->_weapon->attack();
	enemy->takeDamage(this->_weapon->getDamage());
	this->_actPoint -= this->_weapon->getAPCost();
	if (enemy->getHP() <= 0)
	{
		delete enemy;
		enemy = nullptr;
	} 
}

/* Getters */

const std::string & Character::getName(void) const 
{
	return (this->_name);
}
AWeapon* Character::getWeapon(void) const
{
	return (this->_weapon);
}

int		Character:: getActionPoint(void) const
{
	return (this->_actPoint);
}

/* Overload operator << */
std::ostream &operator<<(std::ostream & out, const Character & obj)
{
	if (obj.getWeapon() == nullptr)
	{
		/* NAME has AP_NUMBER AP and is unarmed */
		std::cout << CYANE;
		std::cout << obj.getName() << " has " << obj.getActionPoint() << " AP and is unarmed" << std::endl;
		std::cout << F_NONE;
	}
	else
	{
		/* NAME has AP_NUMBER AP and wields a WEAPON_NAME */
		std::cout << CYANE;
		std::cout << obj.getName() << " has " << obj.getActionPoint() << " AP and wields a " << obj.getWeapon()->getName() << std::endl;
		std::cout << F_NONE;
	}
	return (out);
}