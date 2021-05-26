#include "ZombieEvent.hpp"

	/*Constructor*/
	ZombieEvent::ZombieEvent()
{

}

	/*Destructor*/
	ZombieEvent::~ZombieEvent()
{

}

void	ZombieEvent::setZombieType(std::string type)
{
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie* newZombie = new Zombie(name, this->_type);

	return (newZombie);
}

void	ZombieEvent::randomChump(void)
{
	std::string RandomZombieName[10] = {"Filo", "Mark", "Sleep", "Myad", "Almir", "Kirill", "Roma" , "Fanzil", "Dog", "Tahir"};
	
	Zombie* zombie = newZombie(RandomZombieName[rand() % 10]);
	zombie->announce();
	delete(zombie);
}