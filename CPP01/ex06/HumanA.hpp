#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

# ifndef COLOR

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

class HumanA
{
private:
	std::string _name;
	Weapon 		&_weapon;

public:
	HumanA(const std::string &name, Weapon &weapon);
	~HumanA();

	/*Methods*/

	void		attack();
	
};

#endif