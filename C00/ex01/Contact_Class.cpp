#include "Contact_Class.hpp"

/*
**  Private method
*/


/*
**  Public method
*/

    /*Constuctor*/

Contact::Contact(void)
{
	this->data[firstName] = "-----";
	this->data[lastName] = "-----";
	this->data[nickName] = "-----";
	this->data[login] = "-----";
	this->data[postalAddress] = "-----";
	this->data[emailAddress] = "-----";
	this->data[phoneNumber] = "-----";
	this->data[birthdayDate] = "-----";
	this->data[favoriteMeal] = "-----";
	this->data[underwearColor] = "-----";
	this->data[darkestSecret] = "-----";
}

    /*Destructor*/

Contact::	~Contact(void)
{

}

    /*Seters*/

void	Contact::setFirstName(std::string word)
{
	this->data[firstName] = word;
}

void    Contact::setLastName(std::string word)
{
    this->data[lastName] = word;
}

void    Contact::setNickName(std::string word)
{
    this->data[nickName] = word;
}

void	Contact::setLogin(std::string word)
{
	this->data[login] = word;
}

void		Contact::setPostalAddress(std::string word)
{
	this->data[postalAddress] = word;
}

void		Contact::setEmailAddress(std::string word)
{
	this->data[emailAddress] = word;
}

void		Contact::setPhoneNumber(std::string word)
{
    this->data[phoneNumber] = word;
}

void		Contact::setBirthdayDate(std::string word)
{
	this->data[birthdayDate] = word;
}

void		Contact::setFavoriteMeal(std::string word)
{
	this->data[favoriteMeal] = word;
}

void		Contact::setUnderwearColor(std::string word)
{
	this->data[underwearColor] = word;
}

void		Contact::setDarkSercret(std::string word)
{
	this->data[darkestSecret] = word;
}

void		Contact::setDataConsole(void)
{
    std::string word;
	
	std::cout << "Please Enter firstName:\n";
	std::getline(std::cin, word);
	this->setFirstName(word);
	
	std::cout << "Please Enter LastName:\n";
	std::getline(std::cin, word);
	this->setLastName(word);
	
	std::cout << "Please Enter nickName:\n";
	std::getline(std::cin, word);
	this->setNickName(word);

	std::cout << "Please Enter login:\n";
	std::getline(std::cin, word);
	this->setLogin(word);

	std::cout << "Please Enter postalAddress:\n";
	std::getline(std::cin, word);
	this->setPostalAddress(word);

	std::cout << "Please Enter emailAddress:\n";
	std::getline(std::cin, word);
	this->setEmailAddress(word);

	std::cout << "Please Enter phoneNumber:\n";
	std::getline(std::cin, word);
	this->setPhoneNumber(word);

	std::cout << "Please Enter birthdayDate:\n";
	std::getline(std::cin, word);
	this->setBirthdayDate(word);

	std::cout << "Please Enter favoriteMeal:\n";
	std::getline(std::cin, word);
	this->setFavoriteMeal(word);

	std::cout << "Please Enter underwearColor:\n";
	std::getline(std::cin, word);
	this->setUnderwearColor(word);

	std::cout << "Please Enter darkestSecret:\n";
	std::getline(std::cin, word);
	this->setDarkSercret(word);
	
	std::cout << GREEN; 
	std::cout << "\nThank you, new contact is created!\n";
	std::cout <<F_NONE;
}

	/*Geters*/

std::string	Contact::getFirstName(void) const
{
	return (this->data[firstName]);
}


std::string	Contact::getLastName(void) const
{
	return (this->data[lastName]);
}

std::string	Contact::getNickName(void) const
{
	return (this->data[nickName]);
}

std::string	Contact::getLogin(void) const
{
	return (this->data[login]);
}

std::string	Contact::getPostalAddress(void) const
{
	return (this->data[postalAddress]);
}

std::string	Contact::getEmailAddress(void) const
{
	return (this->data[emailAddress]);
}

std::string	Contact::getPhoneNumber(void) const
{
	return (this->data[phoneNumber]);
}

std::string	Contact::getBirthdayDate(void) const
{
	return (this->data[birthdayDate]);
}

std::string	Contact::getFavoriteMeal(void) const
{
	return (this->data[favoriteMeal]);
}

std::string	Contact::getUnderwearColor(void) const
{
	return (this->data[underwearColor]);
}

std::string	Contact::getDarkSercret(void) const
{
	return (this->data[darkestSecret]);
}

bool	Contact::isEmptyContact(void) const
{
	int	len;

	len = 0;
	for (int i = firstName; i <=darkestSecret;i++)
	{
		len += this->data[i].length();
	}
	if (len == 0)
		return (true);
	return (false);
}

int		Contact::getMaxSizeInfo(void) const
{
	int max;

	max = 0;
	for (int i = firstName; i<= darkestSecret; i++)
	{
		if ((int)this->data[i].length() >= max)
			max = data[i].length();
	}
	return (max);
}