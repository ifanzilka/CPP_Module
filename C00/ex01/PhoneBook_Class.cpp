#include "PhoneBook_Class.hpp"
#include <iomanip>
#include <iostream>

/*
**  Private method
*/

void	PhoneBook::viewContacts(void) const
{
	std::cout << F_BLUE;
	std::cout << "+--------------------------------------+\n";
    std::cout << "|               PHONE BOOK             |\n";
    std::cout << "+--------------------------------------+\n";

	std::cout << "+--------------------------------------+\n";
    std::cout << "|Index| FirstName| LastName | NickName |\n";
    std::cout << "+--------------------------------------+\n";
	for (int i = 0; i < this->cntContact; i++)
	{
		std::cout <<"|"<< std::setw(5) << i + 1 << "|";
		if (this->contacts[i].getFirstName().length() > 10)
		{
			std::cout << this->contacts[i].getFirstName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contacts[i].getFirstName() << "|"; 
		}
		if (this->contacts[i].getLastName().length() > 10)
		{
			std::cout << this->contacts[i].getFirstName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contacts[i].getLastName() << "|"; 
		}
		if (this->contacts[i].getNickName().length() > 10)
		{
			std::cout << this->contacts[i].getNickName().substr(0, 9) << ".|";
		}
		else
		{
			std::cout << std::setw(10) << this->contacts[i].getNickName() << "|"; 
		}
		std::cout << "\n";
	}
	std::cout << "+--------------------------------------+\n";
}

void	PhoneBook::viewMiniTable(int max) const
{
	std::cout << "+";
	for (int i = 0; i <= max; i++)
		std::cout << "-";
	std::cout << "+\n";
}

void	PhoneBook::viewFullInfo(Contact contact) const
{
	int max = contact.getMaxSizeInfo();
	int maxInfo =  contact.getMaxSizeInfo();

	max += 17;
	std::cout << F_BLUE;
	viewMiniTable(max);
	std::cout << "|" << "FirstName:       |" << std::setw(maxInfo) << contact.getFirstName() << "|\n";
	viewMiniTable(max);
	std::cout << "|" << "LastName:        |" << std::setw(maxInfo) << contact.getLastName() << "|\n";
	viewMiniTable(max);
	std::cout << "|" << "NickName:        |" << std::setw(maxInfo) << contact.getNickName() << "|\n";
	viewMiniTable(max);
	std::cout << "|" << "Login:           |" << std::setw(maxInfo) << contact.getLogin() << "|\n";
	viewMiniTable(max);
	std::cout << "|" << "Postal Adress:   |" << std::setw(maxInfo) << contact.getPostalAddress() << "|\n";
	viewMiniTable(max);
	std::cout << "|" << "Email Adress:    |" << std::setw(maxInfo) << contact.getEmailAddress() << "|\n";
	viewMiniTable(max);
	std::cout << "|" << "Phone Number:    |" << std::setw(maxInfo) << contact.getPhoneNumber() << "|\n";
	viewMiniTable(max);
	std::cout << "|" << "Birthday Day:    |" << std::setw(maxInfo) << contact.getBirthdayDate() << "|\n";
	viewMiniTable(max);
	std::cout << "|" << "Favorite Meal:   |" << std::setw(maxInfo) << contact.getFavoriteMeal() << "|\n";
	viewMiniTable(max);
	std::cout << "|" << "Underwear Color: |" << std::setw(maxInfo) << contact.getUnderwearColor() << "|\n";
	viewMiniTable(max);
	std::cout << "|" << "Darkest Secret:  |" << std::setw(maxInfo) << contact.getDarkSercret() << "|\n";
	viewMiniTable(max);
	std::cout << F_NONE;
}

void	PhoneBook::readConsoleNumContact(void) const
{
	std::string s_id;
	int	index;

	std::cout << GREEN << "Enter num contact:\n" << F_NONE;
	getline(std::cin, s_id);
	index = atoi(s_id.c_str());
	if (index <= 0 || index > this->cntContact)
	{
		std::cout << RED;
		std::cout << "Contact not found :(\n";
		std::cout << F_NONE;
		return ;
	}
	viewFullInfo(contacts[index - 1]);
}

/*
**  Public method
*/



        /*Constructor*/
        PhoneBook::PhoneBook(void)
{
    this->cntContact = 0;
}

        /*Destructor*/
        PhoneBook::~PhoneBook(void)
{

}

void    PhoneBook::getMan() const 
{
    std::cout << F_YELLOW ;
	std::cout << "+-------------------------------------------------------+\n";
    std::cout << "|                 AWESOME PHONE BOOK                    |\n";
    std::cout << "+-------------------------------------------------------+\n";
    std::cout << "|  Welcome in the 80s and its unbelievable technology!  |\n";
    std::cout << "|  I present to your attention the \"PhoneBook\"          |\n";
    std::cout << "|  Here you can save up to 8 contacts - try it!         |\n";
    std::cout << "+-------------------------------------------------------+\n";
    std::cout << "\n";
    std::cout << "+-------------------------------------------------------+\n";
    std::cout << "|                  AVAILABLE COMMANDS                   |\n";
    std::cout << "+-------------------------------------------------------+\n";
    std::cout << "|                                                       |\n";
    std::cout << "|     ADD     -   use this command to add contact       |\n";
    std::cout << "|                 to phone book                         |\n";
    std::cout << "|                                                       |\n";
    std::cout << "|     SEARCH  -   shows a list of contacts,             |\n";
    std::cout << "|                 then you need to enter the serial     |\n";
    std::cout << "|                 number of the contact to view         |\n";
    std::cout << "|                 the detailed information.             |\n";
    std::cout << "|                 0 to exit from search                 |\n";
    std::cout << "|                                                       |\n";
    std::cout << "|     EXIT    -   exit from PhoneBook                   |\n";
    std::cout << "|                 ATTENTION! All contacts will be lost! |\n";
    std::cout << "|                                                       |\n";
    std::cout << "+-------------------------------------------------------+\n";
	std::cout << F_NONE ;
}

void	PhoneBook::addContact()
{
    if (this->cntContact == 8)
    {
        std::cout << RED;
        std::cout << "Sorry, PhoneBook is full\n";
        std::cout << F_NONE;
        return ;
    }
    std::cout << GREEN;
    std::cout << "Add new contact" << std::endl;
    std::cout << F_NONE;
    this->contacts[cntContact].setDataConsole();
	if (this->contacts[cntContact].isEmptyContact())
	{
		std::cout << RED;
   		std::cout << "Sorry, you write empty contact :(" << std::endl;
    	std::cout << F_NONE;
		this->contacts[cntContact] = Contact();
		return ;
	}
    this->cntContact++;
    std::cout << F_YELLOW;
    std::cout << "Count contact: " << this->cntContact << std::endl;
    std::cout << F_NONE;
}

void	PhoneBook::searchContact(void) const
{
	if (this->cntContact == 0)
	{
		std::cout << RED;
		std::cout << "Sorry, PhoneBook is empty\n";
		std::cout << F_NONE;
		return ;
	}
	viewContacts();
	readConsoleNumContact();
}