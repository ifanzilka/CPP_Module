#include "Bureaucrat.hpp"


/* Constructor */

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << GREEN;
	std::cout << "Bureaucrat constructor call\n";
	std::cout << F_NONE;
	if (grade < 1)
	{
		throw Bureaucrat::GradeTooHighException("Bureaucrat constructor error");
	}
	else if (grade > 150)
	{
		throw Bureaucrat::GradeTooLowException("Bureaucrat constructor error");
	}
	_grade = grade;
}

/* Destructor */

Bureaucrat::~Bureaucrat()
{
	std::cout << F_YELLOW;
	std::cout << "Burecrat destructor call" << std::endl;
	std::cout << F_NONE;
}

/* Overload copy constructor */

Bureaucrat::Bureaucrat(const Bureaucrat & copy)
{
	*this = copy;
}

/* Overload operator= */

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & obj)
{
	if (this == &obj)
		return (*this);
	this->_grade = obj.getGrade();
	this->_name = obj.getName();
	return (*this);
}

/* Methods */
void Bureaucrat::signForm(Form &form)
{
	form.beSigned(*this);
}

/* Getters */

const std::string &Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const 
{
	return _grade;
}


void Bureaucrat::decGrade()
{
	if (_grade - 1 > 0)
		_grade--;
	else
		throw Bureaucrat::GradeTooHighException(" " + _name + " decGrade error");
}

void Bureaucrat::incGrade()
{
	if (_grade + 1 < 150)
		_grade++;
	else
		throw Bureaucrat::GradeTooLowException(" " + _name + " incGrade error");
}

std::ostream & operator <<(std::ostream &out, const Bureaucrat & bur)
{
	/* like <name>, bureaucrat grade <grade>. */
	out << "Bureaucrat: " <<  bur.getName() << "\ngrade: " << bur.getGrade() << std::endl;
	return (out);
}


/* Construtor Exeption */
Bureaucrat::GradeTooHighException::GradeTooHighException(const std::string &msg)
{
	std::cout << "GradeTooHighException constructor call\n";
	this->_ErrorMsg = msg;
}

/* Destrictor */
Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
	std::cout << "GradeTooHighException destructor call\n";
}

/* Overload basic methods */
const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	std::string tmp;

	tmp = RED;
	tmp += "GradeTooHighException";
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
Bureaucrat::GradeTooLowException::GradeTooLowException(const std::string &msg)
{
	std::cout << "GradeTooLowException constructor call\n";
	this->_ErrorMsg = msg;
}

/* Destrictor */
Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
	std::cout << "GradeTooLowException destructor call\n";
}




/* Overload basic methods */
const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	std::string tmp;

	tmp = RED;
	tmp += "GradeTooLowException";
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