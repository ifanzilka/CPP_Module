#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"
#include "Peon.hpp"

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

class Sorcerer
{
private:
		Sorcerer();
		std::string _name;
		std::string _title;
public:

		/* Constructor */
		Sorcerer(std::string name, std::string title);
		
		/* Destructor */
		~Sorcerer();

		/* Copy constructor */
		Sorcerer(const Sorcerer & obj);

		/* Operation overload = */
		Sorcerer&operator=(const Sorcerer & obj);

		/* Getters */
		std::string getName() const;
		std::string getTitle() const;

		/* New methods */
		void Introduce() const;
		void polymorph(Victim const &) const;
		//void polymorph(Peon const &) const;	
};

	/* Overload operator << */
std::ostream& operator<<(std::ostream &out, const Sorcerer& obj);

#endif