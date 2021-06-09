
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"


int main()
{
	ClapTrap a("ifanzilka");
	ScavTrap b("almirka");
	FragTrap c("kiriil");
	NinjaTrap d("ninja");

	d.ninjaShoebox(a);
	d.ninjaShoebox(b);
	d.ninjaShoebox(c);
	d.ninjaShoebox(d);

	return (0);
}