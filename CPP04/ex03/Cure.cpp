#include "Cure.hpp"

/* Constructor */
Cure::Cure() : AMateria("cure")
{
	std::cout << GREEN;
	std::cout << "Cure constructor call!" << std::endl;
	std::cout << F_NONE;
}

/* Destructor */
Cure::~Cure()
{
	std::cout << RED;
	std::cout << "Cure destructor call!" << std::endl;
	std::cout << F_NONE;
}


/* Overload copy constructor */
Cure::Cure(const Cure &copy) :AMateria(copy) 
{

}

/* Overload oeprator= */
Cure &Cure::operator=(const Cure &other)
{
	/* Alternative:
		this->_xp = cure.getXP();
		this->_type = cure.getType();
	*/
	AMateria::operator=(other);
	return (*this);
}

/* Methods */

AMateria* Cure::clone(void) const
{
	return ((new Cure()));
}

void	Cure::use(ICharacter &target)
{
	(void) target;
	AMateria::use(target);
	/* "* heals NAME’s wounds * */
	std::cout << CYANE;
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	std::cout << F_NONE;
}