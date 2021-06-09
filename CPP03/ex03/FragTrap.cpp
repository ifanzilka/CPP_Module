#include "FragTrap.hpp"

/* Overload constructor */

FragTrap::FragTrap(): ClapTrap()
{	
	std::cout << GREEN;
	std::cout << "FragTrap: Call constructor  1 ScavTrap\n";
	std::cout << F_NONE;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << GREEN;
	std::cout << "FragTrap: Call constructor 2  ScavTrap\n";
	std::cout << F_NONE;
}

	/* Destructor */

FragTrap::~FragTrap()
{
	std::cout << RED;
	std::cout << "FragTrap: I'm dead💀" << std::endl;
	std::cout << F_NONE;
}	

	/* Copy Constructor */

FragTrap::FragTrap(const FragTrap &other)  : ClapTrap(other) 
{
	std::cout << GREEN;
	std::cout << "FragTrap: Call copy constructor\n";
	std::cout << F_NONE;
}

	/* OVERLOAD OPERATOR = */

FragTrap& FragTrap::operator=(const FragTrap &obj)
{
	ClapTrap::operator=(obj);
	std::cout << GREEN;
	std::cout << "FragTrap: Call operator=\n";
	std::cout << F_NONE;
	return *this;
}

	/* New methods */

void FragTrap::vaulthunter_dot_exe(const std::string &target)
{
	srand(time(0));
	std::string attacks[15] = {"This time it'll be awesome, I promise!",
							  "Hey everybody, check out my package!",
							  "Place your bets!",
							  "Defragmenting!",
							  "Recompiling my combat code!",
							  "Running the sequencer!",
							  "It's happening... it's happening!",
							  "It's about to get magical!",
							  "Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!",
							  "Gotta blow up a bad guy, GOTTA BLOW UP A BAD GUY!",
							  "Some days, you just can't get rid of an obscure pop-culture reference.",
							  "Kill, reload! Kill, reload! KILL! RELOAD!",
							  "Ratattattattatta! Powpowpowpow! Powpowpowpow! Pew-pew, pew-pew-pewpew!",
							  "All burn before the mighty Siren-trap!",
							  "It's time to phase you suckers out!"
							  };
	int rand_attack = rand() % 15;
	if (this->_EnergyPoint >= 25)
	{
		std::cout << CYANE;
		std::cout << _name  << ": " << "are you ready" " " << target << ": ??? \n";
		std::cout << attacks[rand_attack] << std::endl;
		std::cout << F_NONE;
		this->_EnergyPoint -= 25;
	}
	else
	{
		std::cout << RED;
		std::cout << _name << ": " << "Oh, oh... Sorry 😞" "\"" << target << "\". ";
		std::cout << "I`m no more shots left!" << std::endl;
		std::cout << F_NONE;
	}

}
