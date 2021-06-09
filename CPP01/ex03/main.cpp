#include "ZombieHorde.hpp"

void CreateHorde()
{

	ZombieHorde* firstHorde = new ZombieHorde(5);

	firstHorde->announce();
	delete (firstHorde);

	ZombieHorde secondHorde(4);
	secondHorde.announce();

}

int main()
{
	CreateHorde();

	// while (1)
	// 	;
	return (0);
}