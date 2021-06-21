#include "Array.hpp"

template <typename T>
/* Constructor */
Array<T>::Array():_arr(0), _size(0)
{

}

template <typename T>
Array<T>::Array(unsigned int size): _size(size)
{
	_arr = new T[size];
}

template <typename T>

/* Destructor */
Array<T>::~Array()
{
	delete[] _arr;
}

/* Overload copy constructor */
template <typename T>
Array<T>::Array(const Array<T> & copy)
{
	*this = copy;
}

/* Overload operator= */
template <typename T>
Array<T>& Array<T>::operator=(const Array<T> & copy)
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

/* Overload operator [] */
template <typename T>
T&  Array<T>::operator[](const int index)
{
	if (index < 0 || index >= (int)_size)
				throw std::out_of_range("out of range!!!");
	else
	{
		return _arr[index];
	}	
}


/* Getters */
template <typename T>
unsigned int Array<T>:: getSize() const 
{
	return (_size);
}
