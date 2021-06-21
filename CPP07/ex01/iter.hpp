#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <cstdlib>

namespace totar
{

	template <class T>

	void randomwrite(T & elem)
	{
		elem =  static_cast <T> (rand()) / (static_cast <T> (RAND_MAX/ 10));
	}

	template <class T>	
	void print(T & elem)
	{
		std::cout << elem << std::endl;
	}
	
	template <class T>
	void iter(T *ptr, int len, void (func)(T &elem))
	{
		for (int i = 0; i < len; i++)
		{
			func(ptr[i]);	
		}
	}
}

#endif