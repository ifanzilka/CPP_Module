#ifndef AMATERIA_HPP
# define AMATERIA_HPP


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

class ICharacter;
#include "ICharacter.hpp"

class AMateria
{
	protected:
			unsigned int	_xp;
			std::string 	_type;
			//AMateria();
	public:
			/* Constructor */
			AMateria(std::string const & type);
			/* Destructor */
			virtual ~AMateria();

			/* Overload copy constructor */
			AMateria(const AMateria & copy);

			/* Overload operator = */
			AMateria & operator=(const AMateria & obj);

			/* Methods */
			std::string const & getType() const; //Returns the materia type
			unsigned int 		getXP() const; //Returns the Materia's XP
			virtual AMateria* 	clone() const = 0;
			virtual void 		use(ICharacter& target);
};


#endif