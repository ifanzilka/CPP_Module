#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm: public Form
{
	private:
			/* data */
			std::string _target;
			ShrubberyCreationForm();
	public:
	
		/* Constructor */
		ShrubberyCreationForm(const std::string target);

		/* Destructor */
		~ShrubberyCreationForm();

		/* Overload copy constructor */
		ShrubberyCreationForm(const ShrubberyCreationForm & copy);

		/* Overload operator= */
		ShrubberyCreationForm & operator=(const ShrubberyCreationForm & obj);

		/* Geters */
		std::string const& getTarget() const;

		/* methods */
		void execute(const Bureaucrat  & executor);


		/* My new exeption */
		class ShrubberyException: public std::exception
		{
			private:
					std::string _ErrorMsg;
			public:
					/* Constructor */
					ShrubberyException(const std::string &msg);

					/* Destructor */
					~ShrubberyException() throw();

					/* Overload Methods */
					const char * what() const throw();
		};
};

#endif