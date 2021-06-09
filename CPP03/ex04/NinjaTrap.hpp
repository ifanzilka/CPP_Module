#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : virtual public  ClapTrap
{
	private:

	public:
			/* Constructor */
			NinjaTrap();
			NinjaTrap(std::string name);
			NinjaTrap(unsigned int EnergyPoint, unsigned int MaxEnergyPoint, unsigned int MeleeAttackDamage);

			/* Destructor */
			virtual ~NinjaTrap();

			/* Copy constructor */
			NinjaTrap(const NinjaTrap &other);

			/* Operation overload = */
			NinjaTrap &operator=(const NinjaTrap &other);

			/* Other Methods */
			void ninjaShoebox (const FragTrap &fragTrap);
			void ninjaShoebox (const ScavTrap &scavTrap);
			void ninjaShoebox (const ClapTrap &clapTrap);
			void ninjaShoebox (const NinjaTrap ninjaTrap);
};	


#endif