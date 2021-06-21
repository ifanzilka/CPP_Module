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
		Array(/* args */);

		Array(unsigned int size);

		/* Destructor */
		~Array();

		/* Overload copy constructor */
		Array(const Array & copy);

		/* Overlaod operator= */
		Array &operator=(const Array & copy);

		/* overload operator [] */
		T & operator[] (const int index);

		/* Getters */
		unsigned int getSize() const ;
};


#endif