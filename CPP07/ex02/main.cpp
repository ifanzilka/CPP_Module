#include "Array.hpp"
#include "Array.cpp"
#include <iostream>
#include <sstream>

void TestInt()
{
	std::cout << "<-------------TEST INT ARR ---------------->\n";
	Array<int> array(5);

	for (unsigned int i = 0; i < array.getSize(); i++)
	{
		array[i] = i;
	}
	for (unsigned int i = 0; i < array.getSize(); i++) 
	{
		try
		{
			std::cout << "i: " << i << " " << array[i] << " \n";
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
	std::cout << "<-------------TEST operator= ---------------->\n";
	Array<int>array1;
	array1 = array;
	for (unsigned int i = 0; i < array1.getSize(); i++)
	{
		std::cout << array1[i] << " ";
	}
	std::cout << "" << std::endl;
}

void TestFloat()
{
	std::cout << "<-------------TEST FLOAT ARR ---------------->\n";
	Array<float> array(5);

	for (unsigned int i = 0; i < array.getSize(); i++)
	{
		array[i] = static_cast<float>(i + 1.5);
	}
	for (unsigned int i = 0; i < array.getSize(); i++) 
	{
		try
		{
			std::cout << "i: " << i << " " << array[i] << " \n";
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

	std::cout << "<-------------TEST operator= ---------------->\n";
	Array<float>array1;
	array1 = array;
	for (unsigned int i = 0; i < array1.getSize(); i++)
	{
		std::cout << array1[i] << " ";
	}
	std::cout << "" << std::endl;
}

void TestString()
{

	// std::cout << "\n>----- Strings -----<" << std::endl;
    // Array<std::string> array(5);
    // array[0] = "one";
    // array[1] = "two";
    // array[2] = "three";
    // array[3] = "four";
    // array[4] = "five";
    // std::cout << "Exist elem: " << array[0] << std::endl;
    // try{
    //     std::cout << "Does not exist elem: ";
    //     std::cout << array[6];
    // }
    // catch(std::exception &e)
    // {
    //     std::cout << std::endl;
    //     std::cout << e.what() << std::endl;
    // }
    // std::cout << "Size: " << array.getSize() << std::endl;

	
	std::cout << "<-------------TEST STRING ARR ---------------->\n";
	Array<std::string> array(5);

	for (unsigned int i = 0; i < array.getSize(); i++)
	{
		std::stringstream ss;
		ss << i;
		std::string tmp = ss.str();
		array[i] = static_cast<std::string>("Hello " + tmp);
	}


	for (unsigned int i = 0; i < array.getSize(); i++) 
	{
		try
		{
			std::cout << "i: " << i << " " << array[i] << " \n";
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

	std::cout << "<-------------TEST operator= ---------------->\n";
	Array<std::string>array1;
	array1 = array;
	for (unsigned int i = 0; i < array1.getSize(); i++)
	{
		std::cout << array1[i] << " ";
	}
	std::cout << "1" << std::endl;

}

int main()
{
	TestInt();
	TestFloat();
	TestString();

	while (1)
		;
	return (0);
}