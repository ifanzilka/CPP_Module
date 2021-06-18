#ifndef CURE_HPP
# define CURE_HPP

#include <string>
#include <iostream>
#include "AMateria.hpp"

class Cure : public AMateria
{
	private:
			/* data */
	public:
			/* Constructor */
			Cure(/* args */);
			/* Destructor */
			virtual ~Cure();
			
			/* Overlaod copy constructor */
			Cure(const Cure & copy);

			/* Overload operator= */
			Cure & operator=(const Cure & obj);
			
			/* Methods */
			AMateria* 	clone() const;
			void 		use(ICharacter &target);
};

# endif
