#include <iostream>

int main()
{
	/*Original*/
	std::string brain = "HI THIS IS BRAIN";
	
	/*Link*/
	std::string &link = brain;

	/*Ponter*/
	std::string *pointer = &brain;

	std::cout << "Original: " << brain << std::endl;
	std::cout << "Link    : " << link << std::endl;
	std::cout << "Pointer : " << *pointer << std::endl;

	return (0);
}