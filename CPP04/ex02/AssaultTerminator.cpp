#include "AssaultTerminator.hpp"

/* Constructor */
AssaultTerminator::AssaultTerminator()
{
	std::cout << GREEN;
	std::cout << "* teleports from space *" << std:: endl;
	std::cout << F_NONE;	
}

/* Destructor */
AssaultTerminator::~AssaultTerminator()
{
	std::cout << RED;
	std::cout << "I’ll be back..." << std::endl;
	std::cout << F_NONE;
}

/* Overlaod copy constructor */
AssaultTerminator::AssaultTerminator(const AssaultTerminator & copy)
{
	std::cout << GREEN;
	std::cout << "AssaultTerminator copy constructor call" << std::endl;
	std::cout << F_NONE;
	*this = copy;
}

/* Overlaod operator= */
AssaultTerminator &AssaultTerminator::operator=(const AssaultTerminator & obj)
{
	(void)obj;
	std::cout << GREEN;
	std::cout << "AssaultTerminator operator= call" << std::endl;
	std::cout << F_NONE;
	return (*this);
}

/* Methods */

ISpaceMarine * AssaultTerminator::clone(void) const
{
	return new AssaultTerminator(*this);
}

void AssaultTerminator::battleCry() const 
{	
	std::cout << F_YELLOW;
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
	std::cout << F_NONE;
}

void AssaultTerminator::rangedAttack() const 
{
	std::cout << F_YELLOW;
	std::cout << "* does nothing *" << std::endl;
	std::cout << F_NONE;
}

void AssaultTerminator::meleeAttack() const 
{
	std::cout << F_YELLOW;
	std::cout << "* attacks with chainfists *" << std::endl;
	std::cout << F_NONE;
}