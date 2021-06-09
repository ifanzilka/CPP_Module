
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void TestCopyConstructorScavTrap(ScavTrap b)
{
	unsigned int a;

	a = b.getEnergyPoints();

}

void TestCopyConstructorClapTrap(ClapTrap b)
{
	unsigned int a;

	a = b.getEnergyPoints();

}

void TestOperatorRavno()
{
	ClapTrap a;
	ScavTrap b;

	ClapTrap c;
	ScavTrap d;

	c = a;
	d = b;

}

void 	TestClapTrap()
{
	ClapTrap one;
	TestCopyConstructorClapTrap(one);
}

void 	TestFragTrap()
{
	FragTrap ft;

	ft.vaulthunter_dot_exe("ku");
}
void TestScavTrap()
{
	ScavTrap a;

	TestCopyConstructorScavTrap(a);
	a.challengeNewcomer();
}

int main()
{
		
	TestOperatorRavno();
	TestClapTrap();
	TestFragTrap();
	TestScavTrap();


	return (0);
}