#include "Human.hpp"

int main(void)
{
	Human h;

	h.action("meleeAttack", "You");
	h.action("rangedAttack", "You");
	h.action("intimidatingShout", "YOU");
	h.action("no", "YOU");

	return (0);
}