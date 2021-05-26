#include "ZombieHorde.hpp"

	/*Constructor*/

		ZombieHorde::ZombieHorde(unsigned int n)
{
	std::string RandomZombieName[10] = {"Filo", "Mark", "Sleep", "Myad", "Almir", "Kirill", "Roma" , "Fanzil", "Dog", "Tahir"};

	std::string	Types[10] = {"School21 Student", "Dumb", "Slow", "Angry", "Envy", "Gluttony", "Fast", "Smart", "Ugly", "Pretty"};

	this->_cnt = n;
	if (n == 0)
		return ;
	this->_zombies = new Zombie[n];
	for(int i = 0; i < (int)n; i++)
	{
		sleep(1);
		srand(time(0));
		this->_zombies[i].setZombieTypeName(Types[rand() % 10], RandomZombieName[rand() % 10]);
		std::cout << GREEN ;
		std::cout << "Zombie is " << this->_zombies[i].getZombieName() << " (" << this->_zombies[i].getZombieType() << ") " << "is created\n";
	}
	
	std::cout << "Hord is size: " << n << " is ready\n";
	std::cout << F_NONE;
}

	/*Destructor*/

		ZombieHorde::~ZombieHorde()
{
	delete [] this->_zombies;
	std::cout << RED;
	std::cout << "Zombie Horde deleted!\n";
	std::cout << F_NONE;
}

void	ZombieHorde::announce(void)
{
	if (this->_cnt > 0)
	{
		for (int i = 0; i < (int)this->_cnt; i++)
		{
			sleep(1);
			this->_zombies[i].announce();
		}
	}
}
