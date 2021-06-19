#include "PresidentialPardonForm.hpp"

/* Constructor */
PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential", 72, 45), _target(target)
{

}

/* Destructor */
PresidentialPardonForm::~PresidentialPardonForm()
{

}

/* Overload copy constructor */

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & copy) : Form(copy)
{
	*this = copy;
}

/* Overload operator= */
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & copy)
{
	this->_target = copy.getTarget();
	return (*this);
}

/* Getters */
const std::string & PresidentialPardonForm::getTarget() const 
{
	 return _target;
}

/* Methods */
void PresidentialPardonForm::execute(const Bureaucrat &bureaucrat)
{
	Form::execute(bureaucrat);
	
	std::cout << GREEN;
	std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	std::cout << F_NONE;
}
