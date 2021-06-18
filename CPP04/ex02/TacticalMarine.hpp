#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
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

/* Тактический космодесантник  */

class TacticalMarine : public ISpaceMarine
{
	private:
	/* data */
	
	public:
			/* Constructor */
			TacticalMarine(/* args */);
			
			/* Destructor */
			~TacticalMarine();

			/* Overload copy construtor */
			TacticalMarine(const TacticalMarine & copy);

			/* Overload operator= */
			TacticalMarine&operator=(const TacticalMarine & obj);

			/* Overload methods */
			/* If this fun not declared 
			** Errors unimplemented pure virtual method 
			*/
			ISpaceMarine* 	clone() const;
			void 			battleCry() const;
			void 			rangedAttack() const;
			void 			meleeAttack() const;
};


#endif