#include "easyfind.hpp"

#include <list>
#include <string>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <array>
#include <iostream>

#ifndef COLOR

# define COLOR
# define F_NONE		"\033[37m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define CYANE		"\033[36m"
# define F_BOLD		"\033[1m"
# define F_ORANGE	"\033[38m"
# define F_YELLOW	"\033[0;33m"
# define F_BLUE		"\033[34m" 

#endif


void vector_test()
{
	std::vector<int> vector;

	for (int i = 0; i < 10; ++i)
	{
		vector.push_back(i);
	}
	
	std::vector<int>::iterator it;
	
	int num_el = 4;

	try
	{
		
		it = easyFind(vector, num_el);

		std::cout << GREEN;
		std::cout << "FIND elem: "<< num_el << " = " << *it << std::endl;
		std::cout << F_NONE;
	}
	catch (std::exception &exception)
	{
		std::cerr << RED;
		std::cerr << "Elem: " << num_el << " error:\n";
		std::cerr << exception.what() << std::endl;
		std::cerr << F_NONE;
	}
}


void set_test()
{
	std::set<int> set;
	for (int i = 10; i < 20; ++i)
	{
		set.insert(i);
	}
	int num_el = 4;
	std::set<int>::iterator it = set.begin();
	try
	{
		it = easyFind(set, num_el);
		std::cout << GREEN;
		std::cout << "FIND elem: "<< num_el << " = " << *it << std::endl;
		std::cout << F_NONE;
	}
	catch (std::exception &exception)
	{
		std::cerr << RED;
		std::cerr << "Elem: " << num_el << " error:\n";
		std::cerr << exception.what() << std::endl;
		std::cerr << F_NONE;
	}
	//std::cout << *it << std::endl;
	set.insert(it, 2);
	// for (std::set<int>::iterator iterator = set.begin(); iterator != set.end(); ++iterator)
	// {
	// 	std::cout << *iterator << std::endl;
	// }
}

int main()
{
	vector_test();
	set_test();
}