#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	private:

	public:
			/* Constructor */
			FragTrap();
			FragTrap(std::string name);
			FragTrap(unsigned int hp, unsigned int maxhp, unsigned int RangeAttack, unsigned int ArmorDamageReduction);

			/* Destructor */
			virtual ~FragTrap();

			/* Copy constructor */
			FragTrap(const FragTrap &other);

			/* Operation overload = */
			FragTrap &operator=(const FragTrap &other);

			/* new methods */
			void vaulthunter_dot_exe(const std::string &target);
};

#endif