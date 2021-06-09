#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
# include <ctime>

class ScavTrap: public ClapTrap
{
	private:


	public:
			/* Constructor */
			ScavTrap();
			ScavTrap(std::string name);

			/* Destructor */
			~ScavTrap();

			/* Copy constructor */
			ScavTrap(const ScavTrap &other);

			/* Operation overload = */
			ScavTrap &operator=(const ScavTrap &other);

			/* new methods */
			void challengeNewcomer() const;

};

#endif