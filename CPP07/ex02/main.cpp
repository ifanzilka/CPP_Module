#include "Array.hpp"
#include <iostream>

void TestInt()
{
	std::cout << "<-------------TEST INT ARR ---------------->\n";
	Array<int> array(5);

	for (unsigned int i = 0; i < array.getSize(); ++i)
	{
		array[i] = i;
	}
	for (unsigned int i = 0; i < array.getSize(); ++i) 
	{
		try
		{
			std::cout << array[i] << " ";
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}
	std::cout << "" << std::endl;
	try
	{
		std::cout << array[array.getSize()] << " ";
	}
	catch (std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
	}

	Array<int>array1;
	array1 = array;
	for (unsigned int i = 0; i < array1.getSize(); ++i)
	{
		std::cout << array1[i] << " ";
	}
	std::cout << "" << std::endl;
}

int main()
{
	TestInt();

	return (0);
}