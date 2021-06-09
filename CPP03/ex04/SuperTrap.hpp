#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"


class SuperTrap : public FragTrap, public NinjaTrap
{

	private:
		
	public:
			 /* Constructor */
			 SuperTrap(std::string name);
			 
			/* Destructor */ 
			 ~SuperTrap();
			
			/* Copy constructor */
			SuperTrap(const SuperTrap &superTrap);
			
			/* Operation overload = */
			SuperTrap &operator=(const SuperTrap &other);

			/* Methods */
			using FragTrap::rangedAttack;
			using NinjaTrap::meleeAttack;
};

#endif