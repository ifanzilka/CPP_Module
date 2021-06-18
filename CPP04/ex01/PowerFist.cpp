#include "PowerFist.hpp"

/* Constructor */

PowerFist::PowerFist() : AWeapon("Power Fist", 8 , 50)
{
	std::cout << GREEN;
	std::cout << "PowerFist constructor call" << std::endl;
	std::cout << F_NONE;
}

/* Destructor */

PowerFist::~PowerFist()
{
	std::cout << RED;
	std::cout << "PowerFist destructor call" << std::endl;
	std::cout << F_NONE;
}

/* Constructor copy */

PowerFist::PowerFist(const PowerFist & copy) : AWeapon(copy)
{
	std::cout << GREEN;
	std::cout << "PowerFist copy constructor call" << std::endl;
	std::cout << F_NONE;
	// Alternative
	// AWeapon(copy);
	//*this = copy;	
}

/* Overload operator= */

PowerFist &PowerFist::operator=(const PowerFist & obj)
{
	AWeapon::operator=(obj);

	std::cout << CYANE;
	std::cout << "PowerFist operator= call" << std::endl;
	std::cout << F_NONE;
	return (*this);
}

/* Overload parent methods */
void	PowerFist::attack(void) const
{
	std::cout << F_YELLOW;
	std::cout << "* pschhh... SBAM! *" << std::endl;
	std::cout << F_NONE;
}