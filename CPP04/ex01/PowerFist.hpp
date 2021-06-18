#ifndef POWERFIST_HPP
# define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
	private:
		/* data */
	public:
		/* Constructor */
		PowerFist();
		
		/* Destructor */
		~PowerFist();

		/* Overload copy constructor */
		PowerFist(const PowerFist & copy);

		/* Overload operator=*/
		PowerFist&operator=(const PowerFist & obj);

		/* Overload parent methods */
		void attack() const;

};


#endif