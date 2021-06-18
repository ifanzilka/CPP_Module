# include "Sorcerer.hpp"


	/* Constructor */
Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << GREEN;
	std::cout << this->_name << ", " << this->_title << ", is born!🐣 " << std::endl;
	std::cout << F_NONE;
}

	/* Destructor */

Sorcerer::~Sorcerer()
{
	std::cout << RED;
	std::cout << this->_name << ", " << this->_title << " is dead. Consequences will never be the same!💀" << std::endl;
	std::cout << F_NONE;
}

	/* Overload copy constructor */

Sorcerer::Sorcerer(const Sorcerer& copy)
{
	*this = copy;
}

	/* Overload operator = */
Sorcerer &Sorcerer::operator=(const Sorcerer & obj)
{
	if (this == &obj)
		return *this;
	_name = obj.getName();
	_title = obj.getTitle();
	return (*this);
}

	/*Getters */
std::string Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string Sorcerer::getTitle(void) const
{
	return (this->_title);
}

	/* Methods */

void Sorcerer::Introduce(void) const
{

	/* I am NAME, TITLE, and I like ponies! */
	std::cout << CYANE;
	std::cout << "I am " << this->_name << ", " << this->_title << ",and I like ponies!🦄" << std::endl;
	std::cout << F_NONE;
}

void Sorcerer::polymorph(Victim const& vict) const
{
	vict.getPolymorphed();
}
// void Sorcerer::polymorph(Peon const& peon) const
// {
// 	peon.getPolymorphed();
// }

std::ostream& operator<<(std::ostream& out, const Sorcerer &obj)
{
	/* I am NAME, TITLE, and I like ponies! */
	out << CYANE;
	out << "I am " << obj.getName() << ", " << obj.getTitle() << ",and I like ponies!🦄" << std::endl;
	out << F_NONE;
	return (out);
}