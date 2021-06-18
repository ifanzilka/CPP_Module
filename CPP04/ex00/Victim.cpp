#include "Victim.hpp"

/* Constructor */

Victim::Victim(std::string name): _name(name)
{
	/* Some random victim called NAME just appeared! */
	std::cout << F_YELLOW;
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl; 
	std::cout << F_NONE;
}

/* Desctructor */

Victim::~Victim(void)
{
	/* Victim NAME just died for no apparent reason! */
	std::cout << RED;
	std::cout << "Victim " << this->_name << " just died for no apparent reason!☠️" << std::endl; 
	std::cout << F_NONE;
}


/* Overload copy constructor */

Victim::Victim(const Victim & copy)
{
	*this = copy;
}

/* Overload operator= */

Victim &Victim::operator=(const Victim & obj)
{
	if (this == &obj)
		return *this;
	_name = obj._name;
	return (*this);
}

/* Geters */

const std::string Victim::getName(void) const
{
	return (this->_name);
}

/* Methods */

void Victim::Introduce(void) const
{
	/* I 'm NAME and I like otters! */

	std::cout << F_YELLOW;
	std::cout << "I'm " << this->_name << " and I like otters!" << std::endl; 
	std::cout << F_NONE;
}

void Victim::getPolymorphed() const
{
	/* NAME has been turned into a cute little sheep! */
	std::cout << F_YELLOW;
	std::cout << this->_name << " has been turned into a cute little sheep!🐑" << std::endl; 
	std::cout << F_NONE;	
}

std::ostream &operator<<(std::ostream &out, const Victim &obj)
{
	out << CYANE;
	out << "I'm " << obj.getName() << " and I like otters!" << std::endl;
	out << F_NONE;
	return (out);
}