#include "MateriaSource.hpp"

/* Constructor */
MateriaSource::MateriaSource() 
{
	for (int i = 0; i < 4; ++i) {
		_source[i] = nullptr;
	}
	std::cout << GREEN;
	std::cout << "MateriaSource constructor call!" << std::endl;
	std::cout << F_NONE;
}

/* Destructro */
MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; ++i) {
		if (_source[i])
			delete _source[i];
	}
	std::cout << RED;
	std::cout << "MateriaSource destructor call!" << std::endl;
	std::cout << F_NONE;
}

/* Overload copy constructor */

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

/* Overload operator= */

MateriaSource &MateriaSource::operator=(const MateriaSource &other) {
	if (this == &other)
		return (*this);
	for (int i = 0; i < 4; ++i) {
		if (_source[i])
		{
			delete _source[i];
			_source[i] = nullptr;
			this->_source[i] = other._source[i]->clone();
		}
	}
	return (*this);
}

/* Methods */
void  MateriaSource:: learnMateria(AMateria* amateria)
{
	if (amateria == nullptr)
	{
		std::cout << RED;
		std::cout << "learnMateria is fail (amateria == nullptr) !!!" << std::endl;
		std::cout << F_NONE;
		return;
	}
	for (int i = 0; i < 4; ++i) {
		if (_source[i] == nullptr)
		{
				_source[i] = amateria;
				std::cout << GREEN;
				std::cout << "learnMateria is successfully!!!" << std::endl;
				std::cout << F_NONE;
				return;
		}
	}
	std::cout << RED;
	std::cout << "learnMateria is fail (full) !!!" << std::endl;
	std::cout << F_NONE;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; ++i)
	{
		if (_source[i])
			if (_source[i]->getType() == type)
				return (_source[i]->clone());
	}
	return (nullptr);
}