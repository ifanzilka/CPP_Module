#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

void copy_test()
{
	Squad vlc1;

	ISpaceMarine* kiri1 = new AssaultTerminator();
	ISpaceMarine* kiri2 = new TacticalMarine();
	
	
	vlc1.push(kiri1);
	vlc1.push(kiri2);

	
	Squad vlc3;
	vlc3= vlc1;

	std::cout << "1\n";
	ISpaceMarine* kiri3 = new AssaultTerminator();
	ISpaceMarine* kiri4 = new TacticalMarine();
	
	vlc3.push(kiri3);
	vlc3.push(kiri4);

	std::cout << "Count of squad = " << vlc1.getCount() << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	for (int i = 0; i < vlc3.getCount(); ++i)
	{
		ISpaceMarine* cur = vlc3.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "------------------------------------------------" << std::endl;
}

void I_test()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
}

void incorrect_test()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* coby = new TacticalMarine;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(coby);
	std::cout << "Count of squad = " << vlc->getCount() << std::endl;


	std::cout << "------------------------------------------------" << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "------------------------------------------------" << std::endl;


	ISquad *vlc2;
	vlc2 = vlc;
	
	
	//ISquad* vlc2 = new Squad;
	ISpaceMarine* kiri = new AssaultTerminator;
	ISpaceMarine* kiri1 = new TacticalMarine;
	vlc2->push(kiri);
	vlc2->push(kiri1);

	std::cout << "Count of squad = " << vlc2->getCount() << std::endl;


	std::cout << "------------------------------------------------" << std::endl;
	for (int i = 0; i < vlc2->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc2->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "------------------------------------------------" << std::endl;

	//delete vlc;
	delete vlc2;
}

int main() {

	copy_test();
	I_test();
	incorrect_test();


	while (1)
		;
	return 0;
}
