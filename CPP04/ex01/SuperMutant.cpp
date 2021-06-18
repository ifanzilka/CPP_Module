#include "SuperMutant.hpp"

/* Constructor */
SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << GREEN;
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
	std::cout << F_NONE;
}

/* Destructor */

SuperMutant::~SuperMutant()
{
	std::cout << RED;
	std::cout << "Aaargh..." << std::endl;
	std::cout << F_NONE;
}

/* Overload copy constructor */

SuperMutant::SuperMutant(const SuperMutant &other) 
{
	*this = other;
}

/* Overload operator = */

SuperMutant &SuperMutant::operator=(const SuperMutant &other) {
	Enemy::operator=(other);
	return *this;
}

void SuperMutant::takeDamage(int damage)
{
	std::cout << F_YELLOW;
	std::cout << "Call take damage SuperMutant" << std::endl;
	std::cout << F_YELLOW;
	Enemy::takeDamage(damage - 3);
}