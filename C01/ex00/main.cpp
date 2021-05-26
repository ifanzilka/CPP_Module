#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap() {
	Pony* pony = new Pony("Bella");

	pony->Hello();
	delete pony;
}

void ponyOnTheStack() {
	Pony pony = Pony("Milla");
	
	pony.Hello();
}

int	main()
{

	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}