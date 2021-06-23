#include "span.hpp"

/* Constructor */
Span::Span(unsigned int size) : _size(size)
{

}

/* Destructor */
Span::~Span()
{

}

/* Overload copy constructor */

Span::Span(const Span & copy)
{
	*this = copy;

}

/* Overload operator= */
Span & Span::operator=(const Span & obj)
{
	if (this == &obj)
		return (*this);
	this->_size = obj._size;
	this->_array = obj._array;
	return (*this);
}

/* Getters */

unsigned int Span::getSize() const
{
	return (_size);
}

unsigned int Span::getCnt() const
{
	return (_array.size());
}

/* Methods */

void Span::addNumber(int num)
{
	if (_array.size() + 1 > _size)
		throw  Span::SpanException("Array is full!");
	else
	{
		_array.push_back(num);
		std::sort (_array.begin(), _array.end());
	}	
}

int Span::shortestSpan()
{
	if (_array.size() <= 1)
		throw  Span::SpanException("Too few elements!");
	else
	{ 
		int shorts;
		int el1;
		int	el2;

		std::vector<int>::iterator it1;
		std::vector<int>::iterator it2;

		it1 = _array.begin();
		it2 = it1 + 1;
		shorts = *it2 - *it1;
		while(it2 !=_array.end()) 
    	{
			el1 = *it1;
			el2 = *it2;

			if (el2 - el1 < shorts)
			{
				shorts = el2 - el1;
			}

        	it1++;
			it2 = it1 + 1;
    	}
		return (shorts);
	}
}

int Span::longestSpan()
{
	if (_array.size() <= 1)
		throw Span::SpanException("Too few elements!");
	else
	{
		int min;
		int	max;

		std::vector<int>::iterator it;

		it = _array.begin();
		min = *it;
		while(it !=_array.end()) 
    	{
			max = *it;
        	++it;
    	}
		return (max - min);
	}
}

/* Construtor Exeption */
Span::SpanException::SpanException(const std::string &msg)
{
	this->_ErrorMsg = msg;
}

/* Destrictor */
Span::SpanException::~SpanException() throw()
{
}

/* Overload basic methods */
const char *Span::SpanException::what(void) const throw()
{
	std::string tmp;

	tmp = "";
	tmp += "SpanException";
	if (!this->_ErrorMsg.empty())
	{
		tmp+= this->_ErrorMsg;
	}
	else
	{
		tmp+= "unknown error";
	}
	return (tmp.c_str());
}

