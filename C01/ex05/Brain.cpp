#include "Brain.hpp"


	Brain::Brain()
{
	std::cout << GREEN << "Brain is create!" << F_NONE << std::endl;
}

	Brain::~Brain()
{
	std::cout << RED << "Brain is destroyed!" << F_NONE << std::endl;
}

std::string	Brain::identify(void) const
{
	const void	*ptr;
	ptr = this;

	std::stringstream	address;

	address << ptr;
	return (address.str());
}