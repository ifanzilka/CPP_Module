#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
	private:
		/* data */
	public:
		/* Constructor */
		SuperMutant();
		
		/* Destructor */
		~SuperMutant();

		/* Overload copy constructor */
		SuperMutant(const SuperMutant & copy);

		/* Overload operator=*/
		SuperMutant&operator=(const SuperMutant & obj);

		/* Overload parent methods */
		void takeDamage(int damage);

};

#endif