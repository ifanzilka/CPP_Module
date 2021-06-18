#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
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

class Squad : public ISquad
{
	private:
	/* data */
			int 			_count;
			ISpaceMarine 	**_arrISpaceMarine;
	public:

			/* Constructor */
			Squad(/* args */);
			
			/* Destructor */
			~Squad();

			/* Overload copy constructor */
			Squad(const Squad & copy);

			/* Overload operator = */
			Squad &operator=(const Squad & copy);
			//Squad* operator=(const Squad *copy);

			/* Overload Methods in Abstract class */
			int 			getCount() const;
			ISpaceMarine 	*getUnit(int i) const;
			int 			push(ISpaceMarine *marine);
};

#endif