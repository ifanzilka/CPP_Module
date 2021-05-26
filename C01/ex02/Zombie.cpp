#include "Zombie.hpp"

	/*Constructor*/

		Zombie::Zombie(std::string name, std::string type)
{
	this->_name = name;
	this->_type = type;

	std::cout << GREEN;
	std::cout << "Zombie " << name << " created!\n";
	std::cout << F_NONE; 
}

	/*Destructor*/

		Zombie::~Zombie()
{
	std::cout << RED;
	std::cout << "Zombie " << this->_name << " Deleted!\n";
	std::cout << F_NONE; 
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> " << "Braiiiiiiinnnssss...\n";
}

	/*Seters*/

void	Zombie::setZombieName(std::string name)
{
	this->_name = name;
}

void	Zombie::setZombieType(std::string type)
{
	this->_type = type;
}

	/*Geters*/

std::string Zombie::getZombieType() const
{
	return (this->_type);
}

std::string Zombie::getZombieName() const
{
	return (this->_name);
}