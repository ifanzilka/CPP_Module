#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	private:
			/* data */
	public:
			/* Constructor */
			Ice(/* args */);
			/* Destructor */
			~Ice();
			
			/* Overlaod copy constructor */
			Ice(const Ice & copy);

			/* Overload operator= */
			Ice & operator=(const Ice & obj);
			
			/* Methods */
			AMateria* 	clone() const;
			void 		use(ICharacter &target);
};

#endif