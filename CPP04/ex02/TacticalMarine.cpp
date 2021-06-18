#include "TacticalMarine.hpp"

/* Constructor */
TacticalMarine::TacticalMarine()
{
	std::cout << GREEN;
	std::cout << "Tactical Marine ready for battle!" << std:: endl;
	std::cout << F_NONE;	
}

/* Destructor */
TacticalMarine::~TacticalMarine()
{
	std::cout << RED;
	std::cout << "Aaargh..." << std::endl;
	std::cout << F_NONE;
}

/* Overlaod copy constructor */
TacticalMarine::TacticalMarine(const TacticalMarine & copy)
{
	std::cout << GREEN;
	std::cout << "TacticalMarine copy constructor call" << std::endl;
	std::cout << F_NONE;
	*this = copy;
}

/* Overlaod operator= */
TacticalMarine &TacticalMarine::operator=(const TacticalMarine & obj)
{
	if (this == &obj)
		return *this;
	std::cout << GREEN;
	std::cout << "TacticalMarine operator= call" << std::endl;
	std::cout << F_NONE;
	return (*this);
}

/* Methods */

ISpaceMarine * TacticalMarine::clone(void) const
{
	return new TacticalMarine(*this);
}

void TacticalMarine::battleCry() const 
{	
	std::cout << F_YELLOW;
	std::cout << "For the holy PLOT!" << std::endl;
	std::cout << F_NONE;
}

void TacticalMarine::rangedAttack() const 
{
	std::cout << F_YELLOW;
	std::cout << "* attacks with a bolter *" << std::endl;
	std::cout << F_NONE;
}

void TacticalMarine::meleeAttack() const 
{
	std::cout << F_YELLOW;
	std::cout << "* attacks with a chainsword *" << std::endl;
	std::cout << F_NONE;
}