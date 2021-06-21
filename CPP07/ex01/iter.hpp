#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <cstdlib>


class Awesome
{
	public:
		Awesome( void ) : _n( 42 ) { return; }
		int get( void ) const { return this->_n; }
	private:
			int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }

template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }

namespace totar
{

	template <class T>

	void randomwrite(T & elem)
	{
		elem =  static_cast <T> (rand()) / (static_cast <T> (RAND_MAX/ 10));
	}

	template <class T>	
	void print(T const & elem)
	{
		std::cout << elem << std::endl;
	}
	
	template <class T>
	void iter(T *ptr, int len, void (func)(T const &elem))
	{
		for (int i = 0; i < len; i++)
		{
			func(ptr[i]);	
		}
	}
}

#endif