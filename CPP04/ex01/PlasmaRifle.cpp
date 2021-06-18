#include "PlasmaRifle.hpp"

/* Constructor */

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5 , 21)
{
	std::cout << GREEN;
	std::cout << "PlasmaRifle constructor call" << std::endl;
	std::cout << F_NONE;
}

/* Destructor */

PlasmaRifle::~PlasmaRifle()
{
	std::cout << RED;
	std::cout << "PlasmaRifle destructor call" << std::endl;
	std::cout << F_NONE;
}

/* Constructor copy */

PlasmaRifle::PlasmaRifle(const PlasmaRifle & copy) : AWeapon(copy)
{
	std::cout << GREEN;
	std::cout << "PlasmaRifle copy constructor call" << std::endl;
	std::cout << F_NONE;
	// Alternative
	// AWeapon(copy);
	//*this = copy;	
}

/* Overload operator= */

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle & obj)
{
	AWeapon::operator=(obj);

	std::cout << CYANE;
	std::cout << "PlasmaRifle operator= call" << std::endl;
	std::cout << F_NONE;
	return (*this);
}

/* Overload parent methods */
void	PlasmaRifle::attack(void) const
{
	std::cout << F_YELLOW;
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
	std::cout << F_NONE;
}