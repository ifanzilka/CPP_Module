#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

#include "AWeapon.hpp"

class PlasmaRifle: public AWeapon
{
	private:
		/* data */
	public:
		/* Constructor */
		PlasmaRifle();
		
		/* Destructor */
		~PlasmaRifle();

		/* Overload copy constructor */
		PlasmaRifle(const PlasmaRifle & copy);

		/* Overload operator=*/
		PlasmaRifle&operator=(const PlasmaRifle & obj);

		/* Overload parent methods */
		void attack() const;

};


#endif