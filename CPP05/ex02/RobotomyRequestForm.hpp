#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <iostream>

class RobotomyRequestForm:public Form
{
	private:
			/* data */
			std::string		_target;
			RobotomyRequestForm(/* args */);
	public:
	/* Constructor */
	RobotomyRequestForm(std::string target);
	
	/* Destructor */
	~RobotomyRequestForm();

	/* Overload copy constructor */
	RobotomyRequestForm(const RobotomyRequestForm & copy);

	/* Overoad operator= */
	RobotomyRequestForm & operator=(const RobotomyRequestForm & obj);

	/* Geters */
	std::string const& getTarget() const;

	/* methods */
	void execute(const Bureaucrat  & executor);
	
};

#endif