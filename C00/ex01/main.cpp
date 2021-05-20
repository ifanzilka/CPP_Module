#include "PhoneBook_Class.hpp"

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

void	getMan()
{	

}

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string cmd;
	
	PhoneBook.getMan();	
	while(true)
	{
		std::cout << GREEN << "Enter the command:" << F_NONE << "\n";
		if (!std::getline(std::cin, cmd)) 
		{
			std::cout << "GoodBye!\n";
			return (1);
		}
		else if (cmd == "EXIT")
		{
			std::cout << "GoodBye!\n";
			return (0);
		}
		else if (cmd == "ADD")
		{
			PhoneBook.addContact();
		}
		else if (cmd == "SEARCH")
		{
			PhoneBook.searchContact();
		}
		else
		{
			std:: cout << RED;
			std:: cout << "Sorry, comamnd not found :(" << std::endl;
			std:: cout << F_NONE;
		}
	}
	return (0);
}