#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

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


class ScavTrap
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
		ScavTrap();
		ScavTrap(std::string name);

		/* Copy constructor */
		ScavTrap(const ScavTrap &obj);

		/* Destructor */
		~ScavTrap();

		/* Operation overload = */
		ScavTrap& operator=(const ScavTrap &obj);

		/* Methods */
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		unsigned int getMeleeAttackDamage() const;
		unsigned int getRangedAttackDamage() const;

		const std::string getName() const;
		void setName(std::string name);
		void challengeNewcomer() const;

};

#endif