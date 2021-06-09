

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap fragTrap1("first");
	FragTrap fragTrap2("second");

	fragTrap1.meleeAttack(fragTrap2.getName());
	fragTrap1.takeDamage(fragTrap2.getMeleeAttackDamage());
	fragTrap1.meleeAttack(fragTrap2.getName());
	fragTrap1.takeDamage(fragTrap2.getMeleeAttackDamage());
	fragTrap1._dot_exe(fragTrap2.getName());
	fragTrap1._dot_exe(fragTrap2.getName());
	fragTrap1._dot_exe(fragTrap2.getName());
	fragTrap1._dot_exe(fragTrap2.getName());
	fragTrap1._dot_exe(fragTrap2.getName());
	
	ScavTrap scavTrap1("first");

	scavTrap1.meleeAttack(fragTrap1.getName());
	fragTrap1.takeDamage(scavTrap1.getMeleeAttackDamage());

	fragTrap1.meleeAttack(scavTrap1.getName());
	scavTrap1.takeDamage(fragTrap1.getMeleeAttackDamage());
}
