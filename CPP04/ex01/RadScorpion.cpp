#include "RadScorpion.hpp"

/* Constructor */
RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << GREEN;
	std::cout << "* click click click * 🦞" << std::endl;
	std::cout << F_NONE;
}

/* Destructor */

RadScorpion::~RadScorpion()
{
	std::cout << RED;
	std::cout << "* SPROTCH *" << std::endl;
	std::cout << F_NONE;
}

/* Overload copy constructor */

RadScorpion::RadScorpion(const RadScorpion &other) 
{
	*this = other;
}

/* Overload operator = */

RadScorpion &RadScorpion::operator=(const RadScorpion &other) {
	Enemy::operator=(other);
	return *this;
}

void RadScorpion::takeDamage(int damage)
{
	std::cout << F_YELLOW;
	std::cout << "Call take damage RadScorpion" << std::endl;
	std::cout << F_YELLOW;
	Enemy::takeDamage(damage - 3);
}