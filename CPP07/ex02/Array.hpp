#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <class T>

class Array
{
private:
		/* data */
		T 				*_arr;
		unsigned int 	_size;
public:
		/* Constructor */
		Array(/* args */) : _arr(0), _size(0)
		{
			
		};

		Array(unsigned int size): _size(size)
		{
			_arr = new T[size];
		}

		/* Destructor */
		~Array()
		{
			delete _arr;
		}

		/* Overload copy constructor */
		Array(const Array & copy)
		{
			*this = copy;
		}

		/* Overlaod operator= */
		Array &operator=(const Array & copy)
		{
			if (_arr)
				delete _arr;
			this->_size = copy._size;
        	this->_arr = new T[this->_size];
        	for (int i = 0; i < (int)_size; ++i) 
			{
				this->_arr[i] = copy._arr[i];
			}
        	return *this;	
		}

		/* overload operator [] */
		T & operator[] (const int index)
		{
			if (index < 0 || index > (int)_size)
				throw std::out_of_range("out of range!!!");
			else
			{
				return _arr[index];
			}	
		}

		/* Getters */
		unsigned int getSize() const 
		{
			return (_size);
		}
};


#endif