#include "Human.hpp"

Human::				Human()
{
	this->_brain = new Brain();
	std::cout << GREEN << "Human is Ready!" << F_NONE << std::endl;
}

Human::				~Human()
{
	delete(this->_brain);
	std::cout << RED << "Human is Destroy!" << F_NONE << std::endl;
}

std::string Human::identify(void) {

	return (this->_brain->identify());
}

Brain& 		Human::getBrain(void)
{
	return (*this->_brain);
}