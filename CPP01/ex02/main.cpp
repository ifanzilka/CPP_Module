#include "ZombieEvent.hpp"
#include <unistd.h>

int		main()
{

	ZombieEvent zombieEvent;
	Zombie* zombie;

	std::string	type[10] = {"School21 Student", "Dumb", "Slow", "Angry", "Envy", "Gluttony",
					"Fast", "Smart", "Ugly", "Pretty"};

	for (int i = 0; i < 10; i++)
	{
		sleep(1);
		srand(time(0));
		zombieEvent.setZombieType(type[rand() % 10]);
		zombieEvent.randomChump();
	}
	zombie = zombieEvent.newZombie("ifanzilka");
	zombie->announce();
	delete(zombie);
	return (0);
}