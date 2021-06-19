#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

#ifndef COLOR

# define COLOR
# define F_NONE		"\033[37m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define CYANE		"\033[36m"
# define F_BOLD		"\033[1m"
# define F_ORANGE	"\033[38m"
# define F_YELLOW	"\033[0;33m"
# define F_BLUE		"\033[34m" 

#endif

class Bureaucrat
{
	private:
			/* data */
			int			_grade;
			std::string _name;
			Bureaucrat();
	public:
			/* Constructor */
			Bureaucrat(std::string name, int grade);
			
			/* Destructor */
			~Bureaucrat();

			/* Overload copy constructor */
			Bureaucrat(const Bureaucrat & copy);

			/* Overload operator= */
			Bureaucrat &operator=(const Bureaucrat &other);

			/* Getters */
			const std::string	&getName() const;
			int 				getGrade() const;

			/* Methods */
			void incGrade();
			void decGrade();


			/* Create Exeption */
			class GradeTooHighException: public std::exception
			{
				private:
						std::string _ErrorMsg;
				public:
						/* Constructor */
						GradeTooHighException(const std::string &error);
						//GradeTooHighException(const char * error);

						/* Destructor */
						~GradeTooHighException() throw();

						/* Methods overload */
						const char *what() const throw();
			};

			class GradeTooLowException : public std::exception
			{
				private:
						std::string _ErrorMsg;
				public:
						/* Constructor */
						GradeTooLowException(const std::string &error);
						//GradeTooLowException(char * error);

						/* Destructor */
						~GradeTooLowException() throw();

						/* Methods overload */
						const char *what() const throw();
			};

};

std::ostream & operator <<(std::ostream &out, const Bureaucrat & bur);

#endif