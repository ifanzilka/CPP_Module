#ifndef PONY_HPP
# define PONY_HPP

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


class Pony
{
private:
		std::string _name;
public:
		/*Constructors*/
		Pony();
		Pony(std::string name);
		

		/*Geters*/
		std::string getName() const;

		/*Seters*/
		void	SetName(std::string name);

		/*Methods*/
		void	Hello() const;
		void	Say(std::string word) const;
};

#endif