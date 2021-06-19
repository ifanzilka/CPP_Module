#include "Form.hpp"

/*Constructor */
Form::Form(std::string name, const int gradesign, const int gradeExecute) : _name(name), _gradeToexecute(gradeExecute), _gradeToSign(gradesign)
{
	/* Checks input parametrs */
	if (gradesign < 1 || gradeExecute < 1)
	{
		throw Form::GradeTooHighException("Constructor ");
	}
	else if (gradesign > 150 || gradeExecute > 150)
	{
		throw Form::GradeTooLowException("Constructor ");	
	}
	_issigned = false;
}

/* Destructor */

Form::~Form()
{

}

/* Overload copy constructor */

Form::Form(const Form & copy) : _name(copy._name),_gradeToexecute(copy._gradeToexecute), _gradeToSign(copy._gradeToSign), _issigned(copy._issigned)
{
	//*this = copy;
}

/* Overload operator= */

Form& Form::operator=(const Form & obj)
{
	/* TESTING !!! */
	if (this == &obj)
		return (*this);
	_issigned = obj._issigned;
	//_gradeToSign = obj._gradeToSign;
	//_gradeToexecute = obj._gradeToexecute;
	_name = obj._name;
	return (*this);
}

/* Methods */
void Form::beSigned(const Bureaucrat & bureaucrat)
{
	/* "<bureaucrat> signs <form>" */
	/* "<bureaucrat> cannot sign <form> because <reason>". */
	
	if (bureaucrat.getGrade() <= _gradeToSign)
	{
		if (_issigned)
		{
			std::cerr << RED; 
			std::cerr << bureaucrat.getName() << "  cannot sign " << _name << " because already signed." << std::endl;
			std::cerr << F_NONE;
		}
		else
		{
			std::cout << GREEN;
			std::cout << bureaucrat.getName() << " signs " << _name << std::endl; 
			std::cout << F_NONE;
		}
		_issigned = true;
	}
	else
	{
		throw Form::GradeTooLowException("Bureaucrat grade is too low");
	}
}

/* Getters */

bool Form::getIssigned() const 
{
	return (_issigned);
}

int Form::getGradeExecute() const
{
	return (_gradeToexecute);
}

int	Form::getGradeSign() const
{
	return (_gradeToSign);
}

std::string Form::getName() const 
{
	return (_name);
}

/* Overload operator= */

std::ostream & operator<<(std::ostream & out, const Form & form)
{
	out << "Name: 		    " << form.getName() << std::endl;
	out << "GradeToSign:    " << form.getGradeSign() << std::endl;
	out << "GradeToExecute: " << form.getGradeExecute() << std::endl;
	out << "Issigned:		" << form.getIssigned() << std::endl;
	return (out);
}





/* Construtor Exeption */
Form::GradeTooHighException::GradeTooHighException(const std::string &msg)
{
	std::cout << "Form::GradeTooHighException constructor call\n";
	this->_ErrorMsg = msg;
}

/* Destrictor */
Form::GradeTooHighException::~GradeTooHighException() throw()
{
	std::cout << "Form::GradeTooHighException destructor call\n";
}

/* Overload basic methods */
const char *Form::GradeTooHighException::what(void) const throw()
{
	std::string tmp;

	tmp = RED;
	tmp += "Form::GradeTooHighException";
	if (!this->_ErrorMsg.empty())
	{
		tmp+= this->_ErrorMsg;
	}
	else
	{
		tmp+= "unknown error";
	}
	tmp+=F_NONE;
	return (tmp.c_str());
}

/* Construtor Exeption */
Form::GradeTooLowException::GradeTooLowException(const std::string &msg)
{
	std::cout << "Form::GradeTooLowException constructor call\n";
	this->_ErrorMsg = msg;
}

/* Destrictor */
Form::GradeTooLowException::~GradeTooLowException() throw()
{
	std::cout << "Form::GradeTooLowException destructor call\n";
}




/* Overload basic methods */
const char *Form::GradeTooLowException::what(void) const throw()
{
	std::string tmp;

	tmp = RED;
	tmp += "Form::GradeTooLowException";
	if (!this->_ErrorMsg.empty())
	{
		tmp+= this->_ErrorMsg;
	}
	else
	{
		tmp+= "unknown error";
	}
	tmp+=F_NONE;
	return (tmp.c_str());
}