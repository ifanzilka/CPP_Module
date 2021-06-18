#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PowerFist.hpp"


void 	TestCopyConstructor_PR( PlasmaRifle copy)
{
	(void) copy;
}

void 	TestAweapon_Hip()
{
	AWeapon* pr = new PlasmaRifle();
	(void) pr;

	pr->attack();
	delete pr;
}

void TestOperator()
{
	PlasmaRifle a;
	PlasmaRifle b;

	a = b;

	std::cout << "tyt\n";
	AWeapon* pr = new PlasmaRifle();
	*pr = a;

}

void 	TestAweapon_Stack()
{
	PlasmaRifle pl;
	
	//TestCopyConstructor_PR(pl);
	TestOperator();
	pl.attack();
}

void 	fun2Enemy(Enemy *my)
{
	my->takeDamage(10);
}

void 	funEnemy(Enemy my)
{
	my.takeDamage(10);
}

void	TestEnemy()
{
	Enemy a(15, "super");

	SuperMutant b;

	funEnemy(a);
	funEnemy(b);
}

void TestEnemy_hip()
{
	Enemy 		*enemy = new Enemy(15,"job");
	SuperMutant *SuperM = new SuperMutant;

	//enemy->takeDamage(10);
	//SuperM->takeDamage(10);

	fun2Enemy(enemy);
	fun2Enemy(SuperM);
	delete enemy;
	delete SuperM;
}


int	main(void)
{
	//TestAweapon_Hip();
	//TestAweapon_Stack();

	//TestEnemy();
	//TestEnemy_hip();

	Character* me = new Character("me");
	std::cout << *me;

	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	
	me->equip(pr);
	std::cout << *me;

	me->equip(pf);
	me->attack(b);
	std::cout << *me;

	me->equip(pr);
	std::cout << *me;

	me->attack(b);
	std::cout << *me;
	
	me->attack(b);
	std::cout << *me;
	
	std::cout << "1\n";
	me->attack(b);
	std::cout << "2\n";
	me->attack(b);
	std::cout << "3\n";
	me->recoverAP();

	std::cout << "4\n";
	me->attack(b);
	std::cout << "5\n";
	me->attack(b);
	std::cout << "6\n";
	me->attack(b);
	std::cout << "7\n";
	me->attack(b);
	
	return (0);
}