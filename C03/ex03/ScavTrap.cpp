# include "ScavTrap.hpp"



/* Overload constructor */

ScavTrap::ScavTrap(): ClapTrap()
{	
	std::cout << GREEN;
	std::cout << "ScavTrap: Call constructor  1 ScavTrap\n";
	std::cout << F_NONE;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << GREEN;
	std::cout << "ScavTrap: Call constructor 2  ScavTrap\n";
	std::cout << F_NONE;
}

	/* Destructor */

ScavTrap::~ScavTrap()
{
	std::cout << RED;
	std::cout << "ScavTrap: I'm dead💀" << std::endl;
	std::cout << F_NONE;
}	

	/* Copy Constructor */

ScavTrap::ScavTrap(const ScavTrap &other)  : ClapTrap(other) 
{
	std::cout << GREEN;
	std::cout << "ScavTrap: Call copy constructor\n";
	std::cout << F_NONE;
}

	/* OVERLOAD OPERATOR = */

ScavTrap& ScavTrap::operator=(const ScavTrap &obj)
{
	ClapTrap::operator=(obj);
	std::cout << GREEN;
	std::cout << "ScavTrap: Call operator=\n";
	std::cout << F_NONE;
	return *this;
}

void ScavTrap::challengeNewcomer() const {
	std::string	screams[5] = {"Uh, how do I cast magic missile?",
								 "Do not look behind my curtain!",
								 "I'm made of magic!",
								 "You can call me Gundalf!",
								 "Avada kedavra!"};
	srand(time(0));							 
	int rand_scream = rand() % 5;
	std::cout << GREEN;
	std::cout 	<< "ScavTrap: " <<  "\"" << _name << "\""  << ": " << screams[rand_scream] << std::endl;
	std::cout << F_NONE;
}