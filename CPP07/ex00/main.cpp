#include "whatever.hpp"
#include <iostream>

void TestSubject()
{
	int a = 2;
	int b = 3;

	ft_42::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ft_42::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ft_42::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	ft_42::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ft_42::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ft_42::max( c, d ) << std::endl;
}

int main(void)
{
	Awesome a(1);
	Awesome b(2);
	
	ft_42::swap(a, b);

	std::cout << "a: " << a.getN() << std::endl;
	std::cout << "b: " << b.getN() << std::endl;

	TestSubject();	

	return (0);
}