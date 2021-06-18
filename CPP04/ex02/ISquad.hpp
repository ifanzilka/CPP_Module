#ifndef ISQUARD_HPP
# define ISQUARD_HPP

#include "ISpaceMarine.hpp"

/* I - interface class (all methods - abstract ) */


/* Squad (команда) */

class ISquad
{
	public:
			virtual 				~ISquad() {}
			virtual int 			getCount() const = 0;
			virtual ISpaceMarine* 	getUnit(int) const = 0;
			virtual int 			push(ISpaceMarine*) = 0;
			//virtual ISquad& operator=(const ISquad& copy)  = 0;
			//virtual 				ISquad(const ISquad & copy);
			//virtual ISquad &operator=(const ISquad & copy) const = 0;
};

#endif