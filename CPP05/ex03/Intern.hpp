#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	private:
			/* data */
		
	public:
			/* Constructor */
			Intern(/* args */);
			
			/* Destructor */
			~Intern();

			/* Overload copy constructor */
			Intern(const Intern & copy);

			/* Overload operator= */
			Intern & operator=(const Intern & copy);

			/* New Methods */
			Form *makeForm(const std::string &name, const std::string &target);

			/* Create Exeption */
			class InternException: public std::exception
			{
				private:
						std::string _ErrorMsg;
				public:
						/* Constructor */
						InternException(const std::string &error);

						/* Destructor */
						~InternException() throw();

						/* Methods overload */
						const char *what() const throw();
			};
};

#endif