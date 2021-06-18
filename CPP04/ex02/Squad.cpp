#include "Squad.hpp"

/* Constructor */

Squad::Squad() : _count(0), _arrISpaceMarine(nullptr)
{
	std::cout << GREEN;
	std::cout << "Squad constructor call!" << std::endl ;
	std::cout << F_NONE;		
}

/* Destructor */

Squad::~Squad()
{
	std::cout << RED;
	std::cout << "Squad destructor call!" << std::endl;
	std::cout << F_NONE;
	for (int i = 0; i < _count; ++i)
	{
		if (this->_arrISpaceMarine[i])
			delete this->_arrISpaceMarine[i];
	}
	delete _arrISpaceMarine;
}

/* Overload copy constructor */

Squad:: Squad(const Squad & copy)
{
	std::cout << "squad copy constructor call\n";
	*this = copy;
}

/* Overload operator= */

Squad &Squad::operator=(const Squad & obj)
{
	(void) obj ;
	std::cout << "squad operator= (1) call\n";
	if (_arrISpaceMarine)
	{	
		for (int i = 0; i < _count; ++i) 
		{
			if (_arrISpaceMarine[i])
				delete _arrISpaceMarine[i];
		}
	}

	_count = obj._count;
	if (obj._arrISpaceMarine)
	{
		_arrISpaceMarine = new ISpaceMarine *[_count];
		for (int i = 0; i < _count; ++i) {
			if (obj._arrISpaceMarine[i])
			{
				//std::cout << "1\n";
				_arrISpaceMarine[i] = obj._arrISpaceMarine[i]->clone();
			}
			else
				_arrISpaceMarine[i] = nullptr;
		}
	}
	else
		_arrISpaceMarine = nullptr;
	return *this;
}

// Squad *Squad::operator=(const Squad * obj)
// {
// 	(void) obj;
// 	std::cout << "squad operator= (2) call\n";

// 	return (nullptr);
// }

/* Methods */


int Squad::getCount() const 
{ 
	return _count;
}

ISpaceMarine* Squad::getUnit(int index) const 
{
	if (index >= _count || index < 0 || _count == 0)
		return nullptr;
	return this->_arrISpaceMarine[index];
}

int		Squad::push(ISpaceMarine *newObj)
{
	if (newObj == nullptr)
		return (this->_count);
	if (this->_count == 0)
	{
		this->_count = 1;
		this->_arrISpaceMarine = new ISpaceMarine*[1];
		this->_arrISpaceMarine[0] = newObj;
	}
	else
	{
		for (int i = 0; i < _count; ++i)
			if (_arrISpaceMarine[i] == newObj)
				return this->_count;
		this->_count++;
		ISpaceMarine **newarr = new ISpaceMarine*[_count];
		for (int i = 0; i < _count - 1; ++i)
		{
			newarr[i] = _arrISpaceMarine[i];
		}
		newarr[_count - 1] = newObj;
		/* Free old */
		delete _arrISpaceMarine;
		this->_arrISpaceMarine = newarr;
	}
	return (this->_count);
}
