#include "AWeapon.hpp"


/* Constructor */
AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
	this->_name = name;
	this->_numDamage = damage;
	this->_actionPoints = apcost;
	std::cout << GREEN;
	std::cout << "AWeapon constructor call" << std::endl;
	std::cout << F_NONE;
}

/* Destructor */
AWeapon::~AWeapon()
{
	std::cout << RED;
	std::cout << "Aweapon destructor call" << std::endl;
	std::cout << F_NONE;
}

/* Overload copy constructor */
AWeapon::AWeapon(const AWeapon &other)
{
	std::cout << GREEN;
	std::cout << "Aweapon copy constructor call" << std::endl;
	std::cout << F_NONE;
	*this = other;
}

/* Overload operator= */

AWeapon &AWeapon::operator=(const AWeapon &obj)
{
	std::cout << CYANE;
	std::cout << "Aweapon operator= call" << std::endl;
	std::cout << F_NONE;
	//std::cout << obj.getName();
	if (this == &obj)
		return *this;
	this->_name = obj.getName();
	this->_numDamage = obj.getDamage();
	this->_actionPoints = obj.getAPCost();
	return (*this);
}

/* Getters */

std::string AWeapon::getName(void) const 
{
	return (this->_name);
}

int			AWeapon::getDamage(void) const
{
	return(this->_numDamage);
}

int 		AWeapon::getAPCost(void) const
{
	return (this->_actionPoints);
}


/* Overload operator << */

std::ostream &operator<<(std::ostream& out, const AWeapon & obj)
{
	out << CYANE;
	out << "Name: " << obj.getName() << " APCost: " << obj.getAPCost() << " Damage: " << obj.getDamage() << std::endl;
	out << F_NONE;
	return (out);
}