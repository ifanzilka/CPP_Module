#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"
# include <unistd.h>
# include <ctime>

class	ZombieHorde
{
private:
		Zombie*			_zombies;
		unsigned int	_cnt;
		
public:
		/*Constructor*/
		ZombieHorde(unsigned int N);

		/*Destructor*/
		~ZombieHorde();

		/*Methods*/
		void	announce();

};



#endif