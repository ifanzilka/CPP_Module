#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{
	private:
		/* data */
	public:
		/* Constructor */
		RadScorpion();
		
		/* Destructor */
		~RadScorpion();

		/* Overload copy constructor */
		RadScorpion(const RadScorpion & copy);

		/* Overload operator=*/
		RadScorpion&operator=(const RadScorpion & obj);

		/* Overload parent methods */
		void takeDamage(int damage);
};

#endif