#include "Converter.hpp"


int main(int argc, char **argv)
{	
	if (argc == 2)
	{
		Converter conv(argv[1]);
		conv.print();
		
	}
	else
	{		
		std::cout << RED;
		std::cout << "Wrong number of arguments" << std::endl;
		std::cout << F_NONE;
	}
	return (0);
}