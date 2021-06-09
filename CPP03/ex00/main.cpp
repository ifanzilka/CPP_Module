#include "FragTrap.hpp"

// void tmp(FragTrap tmp)
// {
// 	std::cout << "Adress tmp: " << &tmp << std::endl;
// 	std::cout << tmp.getName() << std::endl;
// }


// int	main()
// {
// 	FragTrap first("Luntik👽");
// 	FragTrap second;

// 	//std::cout << "Adress frs: " << &first << std::endl;	
// 	//tmp(first);
// 	//std::cout << a.getName() << std::endl;
// }

int main()
{
	FragTrap fragTrap1("first");
	FragTrap fragTrap2("second");

	fragTrap1.meleeAttack(fragTrap2.getName());
	// fragTrap1.takeDamage(fragTrap2.getMeleeAttackDamage());
	// fragTrap1.meleeAttack(fragTrap2.getName());
	// fragTrap1.takeDamage(fragTrap2.takeDamage());
	fragTrap1.vaulthunter_dot_exe(fragTrap2.getName());
	fragTrap1.vaulthunter_dot_exe(fragTrap2.getName());
	fragTrap1.vaulthunter_dot_exe(fragTrap2.getName());
	fragTrap1.vaulthunter_dot_exe(fragTrap2.getName());
	fragTrap1.vaulthunter_dot_exe(fragTrap2.getName());


//	fragTrap1.meleeAttack(fragTrap2.getName());
//	fragTrap1.takeDamage(fragTrap2.getMeleeAttackDamage());
//	fragTrap1.meleeAttack(fragTrap2.getName());
//	fragTrap1.takeDamage(fragTrap2.getMeleeAttackDamage());
//	fragTrap1.beRepaired(10);
//	fragTrap1.meleeAttack(fragTrap2.getName());
//	fragTrap1.takeDamage(fragTrap1.getMeleeAttackDamage());

	fragTrap2 = fragTrap1;

	fragTrap2.takeDamage(100);

	//std::cout << fragTrap2.getName() << std::endl;

//	fragTrap2.vaulthunter_dot_exe("ifanzilka");
//	fragTrap2.vaulthunter_dot_exe("ifanzilka");
//	fragTrap2.vaulthunter_dot_exe("ifanzilka");
//	fragTrap2.vaulthunter_dot_exe("ifanzilka");
//	fragTrap2.vaulthunter_dot_exe("ifanzilka");
//	fragTrap.beRepaired(10);
//	fragTrap.takeDamage(100);
//	fragTrap.beRepaired(1020);
//	fragTrap.beRepaired(101);
}
