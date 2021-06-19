#ifndef FORM_HPP
# define FORM_HPP

class Form;
#include "Bureaucrat.hpp"

#include <iostream>

class Form
{
	private:
			/* data */
			std::string _name;
			const int	_gradeToexecute;
			const int	_gradeToSign;
			bool 		_issigned;
			Form(/* args */);

	public:

			/* Constructor */
			Form(std::string name, const int gradesign, const int gradeExecute);
			/* Destructor */
			~Form();

			/* Overload copy constructor */
			Form(const Form & copy);

			/* Overload operator= */
			Form &operator=(const Form & obj);

			/* Methods */
			void			beSigned(const Bureaucrat &bureaucrat);
			virtual void 	execute(const Bureaucrat  & executor) ;

			/* Getters */
			bool 		getIssigned() const;
			int			getGradeSign() const;
			int			getGradeExecute() const;
			std::string getName() const;

			class GradeTooLowException : public std::exception
			{
				private:
						std::string _ErrorMsg;
				public:
						/* Constructor */
						GradeTooLowException(const std::string &msg);

						/* Destrutor */
						~GradeTooLowException() throw();

						/* Overload parent methods */
						const char * what() const throw();
			};

			class GradeTooHighException : public std::exception
			{
				private:
						std::string _ErrorMsg;
				public:
						/* Constructor */
						GradeTooHighException(const std::string &msg);

						/* Destrutor */
						~GradeTooHighException() throw();

						/* Overload parent methods */
						const char * what() const throw();
			};
			
};

/* Overload operator << */
std::ostream & operator<< (const std::ostream &out, const Form & form);

#endif