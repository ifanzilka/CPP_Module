#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <iostream>
#include <sstream>


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

class Brain
{
private:
		/* data */
public:
		/*Constructor*/
		Brain(/* args */);
		
		/*Destructor*/
		~Brain();

		/*Method*/
		std::string identify() const;
};

#endif