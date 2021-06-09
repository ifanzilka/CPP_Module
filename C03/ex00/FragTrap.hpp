#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include <iostream>
# include <unistd.h>
# include <ctime>

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


class FragTrap
{
private:
			/* Data */
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
		FragTrap(std::string name);
		FragTrap();
		
		
		/* Copy constructor */
		FragTrap(const FragTrap &obj);

		/* Destructor */		
		~FragTrap();

		/* Operation overload = */
		FragTrap& operator=(const FragTrap &obj);

		/* Methods */
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);

		unsigned int getMeleeAttackDamage() const;

		unsigned int getRangedAttackDamage() const;

		const std::string getName() const;
		void setName(std::string name);

};

#endif