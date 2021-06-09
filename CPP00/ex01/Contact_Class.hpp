#ifndef CPP_CONTACT_CLASS_HPP
# define CPP_CONTACT_CLASS_HPP
#include <iostream>
#include <string>

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

enum	contactData
{
	firstName,
	lastName,
	nickName,
	login,
	postalAddress,
	emailAddress,
	phoneNumber,
	birthdayDate,
	favoriteMeal,
	underwearColor,
	darkestSecret
};

class Contact
{
private:
		std::string	data[11];

public:
		Contact();
		~Contact();
		
		/* Seters */

		void	setFirstName(std::string word);
		void	setLastName(std::string word);
		void	setNickName(std::string word);
		void	setLogin(std::string word);
		void	setPostalAddress(std::string word);
		void	setEmailAddress(std::string word);
		void	setPhoneNumber(std::string word);		
		void	setBirthdayDate(std::string word);
		void	setFavoriteMeal(std::string word);
		void	setUnderwearColor(std::string word);
		void	setDarkSercret(std::string word);
		void	setDataConsole();

		/* Geters */	

		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickName() const;
		std::string	getLogin() const;
		std::string	getPostalAddress() const;
		std::string	getEmailAddress() const;
		std::string	getPhoneNumber() const;		
		std::string	getBirthdayDate() const;
		std::string	getFavoriteMeal() const;
		std::string	getUnderwearColor() const;
		std::string	getDarkSercret() const;
		int			getMaxSizeInfo() const;
		/*Method*/
		
		bool		isEmptyContact() const;
};

#endif 