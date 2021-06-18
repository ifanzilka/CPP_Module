
#include "Victim.hpp"
#include "Sorcerer.hpp"
#include "Peon.hpp"

void TestDestructor()
{
	Victim * p = new Peon("ke ke");

    delete p;
}

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	
	Victim jim("Jimmy");
	
	Peon joe("Joe");
	
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	//TestDestructor();

	return 0;
}