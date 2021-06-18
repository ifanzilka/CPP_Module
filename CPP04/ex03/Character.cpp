#include "Character.hpp"

/* Constructor */

Character::Character(const std::string  &name) : _name(name)
{
	for (int i = 0; i < 4; ++i) {
		this->_amateria[i] = nullptr;
	}
	std::cout << GREEN;
	std::cout << "Character constructor call" << std::endl;
	std::cout << F_NONE;
}

/* Destructor */
Character::~Character()
{
	for (int i = 0; i < 4; ++i) {
		if (this->_amateria[i])
			delete this->_amateria[i];
	}
	std::cout << RED;
	std::cout << "Character Destructor call" << std::endl;
	std::cout << F_NONE;
}

/* Overload copy constructor */

Character:: Character(const Character & copy)
{
	*this = copy;
}

/* Overlaod operator= */

Character & Character::operator=(const Character & obj)
{
	if (this == &obj)
		return (*this);
	for (int i = 0; i < 4; ++i) 
	{
		if (this->_amateria[i])
			delete this->_amateria[i];
	}
	this->_name = obj._name;
	for (int i = 0; i < 4; ++i) {
		this->_amateria[i] = obj._amateria[i]->clone();
	}
	return (*this);
}

/* Methods */

const std::string &Character::getName() const 
{
	return _name;
}

void 	Character::equip(AMateria *m)
{
	if (m == nullptr)
	{
		std::cout << RED;
		std::cout << "equip is fail (AMateria is nullptr) !!!" << std::endl;
		std::cout << F_NONE;
		return;
	}
	for (int i = 0; i < 4; ++i) {
		if (this->_amateria[i] == nullptr)
		{
				this->_amateria[i] = m;
				std::cout << GREEN;
				std::cout << "equip is successfully!!!" << std::endl;
				std::cout << F_NONE;
				return;
		}
	}
	std::cout << RED;
	std::cout << "equip is fail (full) !!!" << std::endl;
	std::cout << F_NONE;
}

void 	Character::unequip(int index)
{
	if (index >= 4 || index < 0 || this->_amateria[index] == nullptr)
	{
		std::cout << RED;
		std::cout << "unequip is fail !!!" << std::endl;
		std::cout << F_NONE;
		return ;
	}
	if (this->_amateria[index])
	{
		this->_amateria[index] = nullptr;
		std::cout << GREEN;
		std::cout << "unequip is successfully!!!" << std::endl;
		std::cout << F_NONE;
	}
}

void 	Character::use(int index, ICharacter &target)
{
	if (index >= 0 && index < 4)
	{
		if (this->_amateria[index])
		{
			std::cout << "Use\n";
			std::cout << "Xp: " << this->_amateria[index]->getXP() << std::endl;
			this->_amateria[index]->use(target);
			std::cout << "Xp: " << this->_amateria[index]->getXP() << std::endl;
		}
	}
}