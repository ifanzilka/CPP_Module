#include "Human.hpp"

typedef void(Human::* func_member) (std::string const &);

void Human::meleeAttack(std::string const &target)
{
	std::cout << GREEN;
	std::cout << "Melee attack on " << target << std::endl;
	std::cout << F_NONE;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << GREEN;
	std::cout << "Ranged attack on " << target << std::endl;
	std::cout << F_NONE;
}

void Human::intimidatingShout(std::string const &target)
{
	std::cout << GREEN;
	std::cout << "SHOUTING ON " << target << std::endl;
	std::cout << F_NONE;
}

void Human::action(std::string const &action_name, std::string const &target)
{
	int key;

	void (Human::*ptr[3])(std::string const &target) = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	// void (Human::* const ptr[3])(std::string const &target) = {
	// 	&Human::meleeAttack,
	// 	&Human::rangedAttack,
	// 	&Human::intimidatingShout
	// };

	// func_member ptr[3] = {
    //     &Human::meleeAttack,
    //     &Human::rangedAttack,
    //     &Human::intimidatingShout
    // };

	key = ("meleeAttack" == action_name) ? 0 :
		("rangedAttack" == action_name) ? 1 :
		("intimidatingShout" == action_name) ? 2
		: 0;
	(this->*ptr[key])(target);
}