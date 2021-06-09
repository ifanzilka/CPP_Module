#ifndef CPP_ZOMBIEEVENT_HPP
# define CPP_ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <iostream>
# include <ctime>

class ZombieEvent {

private:
		std::string _type;

public:
		/*Constructor*/
		ZombieEvent();

		/*Destructor*/
		~ZombieEvent();

		/*Seters*/
		void	setZombieType(std::string type);

		/*Methods*/
		Zombie* newZombie(std::string name);
		void	randomChump();
};
		
#endif