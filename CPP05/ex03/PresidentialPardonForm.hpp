#ifndef PRESIDENTIALRARDONFORM_HPP
# define PRESIDENTIALRARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
			/* data */
			PresidentialPardonForm(/* args */);
			std::string _target;
	public:
			/* Constructor */
			PresidentialPardonForm(std::string target);

			/* Destructor */
			~PresidentialPardonForm();

			/* Overload copy constructor */
			PresidentialPardonForm(const PresidentialPardonForm & copy);

			/* Overload operator= */
			PresidentialPardonForm & operator=(const PresidentialPardonForm & copy);

			/* Geters */
			std::string const& getTarget() const;

			/* methods */
			void execute(const Bureaucrat  & executor);
};

#endif