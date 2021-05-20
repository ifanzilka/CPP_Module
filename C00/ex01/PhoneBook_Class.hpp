#ifndef CPP_PHONEBOOK_CLASS_HPP
# define CPP_PHONEBOOK_CLASS_HPP
#include "Contact_Class.hpp"

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

class PhoneBook
{
private:
		Contact contacts[8];
		int 	cntContact;
		void	viewMiniTable(int max) const;
		void	viewContacts() const;
		void	readConsoleNumContact() const;
		void	viewFullInfo(Contact contact) const;

public:
		PhoneBook();
		~PhoneBook();
		void	getMan() const;
		void	addContact();
		void	searchContact() const;	
};

#endif 