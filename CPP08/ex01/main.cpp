#include <iostream>
#include <vector>
#include "span.hpp"

void TestMax()
{
	int n;

	n = 1;
	Span a(n);

	for (int i = 0; i < n; i++)
	{
		a.addNumber(i );
	}
	std::cout << "Max len: " << a.longestSpan() << std::endl;
	std::cout << "Min len: " << a.shortestSpan() << std::endl;
	
}

int main()
{	
	try
	{
		TestMax();
	}
	catch (std::exception & ex)
	{
		std::cout << ex.what() << std::endl;
	}
	return (0);
}