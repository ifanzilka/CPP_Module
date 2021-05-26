#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

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

class	Zombie {

private:
	std::string _name;
	std::string _type;

public:
	/*Constructor*/
	Zombie(std::string name, std::string type);

	/*Destructor*/
	~Zombie();

	/*Seters*/

	void		setZombieType(std::string type);
	void		setZombieName(std::string name);
	
	/*Geters*/

	std::string getZombieType() const;
	std::string getZombieName() const;
	
	/*Methods*/
	void	announce () const;
};

#endif