#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream> 

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

class Weapon
{
private:
		std::string _type;
public:
	Weapon(const std::string & type);
	~Weapon();

	/*Geters*/
	const std::string&	getType() const;

	/*Seters*/
	void 				setType(const std::string &type);

};

#endif