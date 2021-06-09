#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class NinjaTrap : public  ClapTrap
{
	private:

	public:
			/* Constructor */
			NinjaTrap(std::string name);

			/* Destructor */
			~NinjaTrap();

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