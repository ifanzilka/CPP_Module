#include "Enemy.hpp"

/* Constructor */

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
	std::cout << GREEN;
	std::cout << "Enemy constructor call\n";
	std::cout << F_NONE;
}

Enemy::Enemy()
{
	std::cout << GREEN;
	std::cout << "Enemy constructor 2 call\n";
	std::cout << F_NONE;
}

/* Destructor */

Enemy::~Enemy()
{
	std::cout << RED;
	std::cout << "ENEMY Destructor call\n";
	std::cout << F_NONE;
}

/* Overload copy cinstructor */

Enemy::Enemy(const Enemy &copy)
{
	*this = copy;
}

/* Overload operator=*/

Enemy & Enemy::operator=(const Enemy & obj)
{
	if (this == &obj)
		return (*this);
	_hp = obj._hp;
	_type = obj._type;
	return (*this);
}

/* Methods */

std::string Enemy::getType(void) const
{
	return (this->_type);
}

int			Enemy::getHP(void) const 
{
	return (this->_hp);
}

/* Overloads methods */
void 		Enemy::takeDamage(unsigned int damage)
{
	std::cout << F_YELLOW;
	std::cout << "Call take damage Enemy" << std::endl;
	std::cout << F_YELLOW;
	if (this->_hp > 0)
	{
		if (damage > _hp)
			_hp = 0;
		else
			_hp -= damage;
	}
}