
#include "Ice.hpp"

/* Constructor */
Ice::Ice() : AMateria("ice")
{
	std::cout << GREEN;
	std::cout << "Ice constructor call!" << std::endl;
	std::cout << F_NONE;
}

/* Destructor */
Ice::~Ice()
{
	std::cout << RED;
	std::cout << "Ice destructor call!" << std::endl;
	std::cout << F_NONE;
}


/* Overload copy constructor */
Ice::Ice(const Ice &copy) :AMateria(copy) 
{

}

/* Overload oeprator= */
Ice &Ice::operator=(const Ice &other)
{
	AMateria::operator=(other);
	return (*this);
}

/* Methods */

AMateria* Ice::clone(void) const
{
	return ((AMateria*)(new Ice()));
}

void	Ice::use(ICharacter &target)
{
	(void) target;
	/* "* shoots an ice bolt at NAME * */
	AMateria::use(target);
	std::cout << CYANE;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	std::cout << F_NONE;
}