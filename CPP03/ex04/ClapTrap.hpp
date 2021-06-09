#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

#ifndef COLOR

# define COLOR
# define F_NONE		"\033[37m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define CYANE		"\033[36m"
# define F_BOLD		"\033[1m"
# define F_ORANGE	"\033[38m"
# define F_YELLOW	"\033[0;33m"
# define F_BLUE		"\033[34m" 

#endif

class ClapTrap
{
	private:
	/* data */

	protected:
				std::string		_name;
				unsigned int	_HitPoint;
				unsigned int	_MaxHitPoint;
				unsigned int	_EnergyPoint;
				unsigned int	_MaxEnergyPoint;
				unsigned int	_Level;
				unsigned int	_MelleAttactDamage;
				unsigned int	_RangedAttactDamage;
				unsigned int	_ArmorDamageReduction;
				

	public:
				/* Constructor */
				
				ClapTrap();
				ClapTrap(unsigned int hp, unsigned int maxhp, unsigned int RangeAttack, unsigned int ArmorDamageReduction);
				ClapTrap(std::string name);
				
				/* Copy constructor */
				ClapTrap(const ClapTrap &copy);

				/* Destructor */
				virtual ~ClapTrap();

				/* Operation overload = */
				ClapTrap& operator=(const ClapTrap &old);

				/* Methods */
				void	rangedAttack(std::string const & target);
				void	meleeAttack(std::string const & target);
				void	takeDamage(unsigned int amount);
				void	beRepaired(unsigned int amount);
				unsigned int getMeleeAttackDamage() const;
				unsigned int getRangedAttackDamage() const;
				unsigned int getEnergyPoints() const;
				const std::string getName() const;
};

#endif