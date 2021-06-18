#include "Peon.hpp"

/* Constructor */

Peon::Peon(const std::string name) : Victim(name)
{
	std::cout << GREEN;
	std::cout << "Zog zog." << std::endl;
	std::cout << F_NONE;
}

/* Destructor */

Peon::~Peon(void)
{
	std::cout << RED;
	std::cout << "Bleuark..." << std::endl;
	std::cout << F_NONE;
}

/* Overoad copy constructor */

Peon::Peon(const Peon & copy) : Victim(copy)
{
}

/* Overload operator=*/

Peon &Peon::operator=(const Peon &other) 
{
	Victim::operator=(other);
	return *this;
}

/* Overload parent methods */

void Peon:: getPolymorphed(void) const
{
	std::cout << F_YELLOW;
	std::cout << this->_name << "  has been turned into a pink pony!🦄" << std::endl; 
	std::cout << F_NONE;	
}