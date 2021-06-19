#include "RobotomyRequestForm.hpp"

/* Constructor */
RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Robotomy", 72, 45), _target(target)
{

}

/* Destructor */
RobotomyRequestForm::~RobotomyRequestForm()
{

}

/* Overload operator copy constructor */

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy) : Form(copy)
{
	*this = copy;
}

/* Overload operator= */
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & copy)
{
	if (this == &copy)
		return (*this);
	this->_target = copy._target;
	return (*this);
}

/* Getters */
std::string const& RobotomyRequestForm:: getTarget() const
{
	return _target;
}

/* Methods */

void RobotomyRequestForm::execute(const Bureaucrat  & executor)
{
	Form::execute(executor);
	
	std::srand(time(0));
	if (std::rand() % 2)
	{
		std::cout << F_YELLOW;
		std::cout << "I'm drill and i do BRRRRRRRR" << std::endl;
		std::cout << F_NONE;
	}
	else
	{
		std::cerr << RED;
		std::cerr << "It's fail drill (((" << std::endl;
		std::cerr << F_NONE;
	}

}