#include "Intern.hpp"

/* Constructor */
Intern::Intern()
{

}

/* Destructor */
Intern::~Intern()
{

}

/* Overload copy constructor */
Intern::Intern(const Intern &other) 
{
	(void)other;
}

/* Overload operaator= */
Intern	&Intern::operator=(const Intern &other)
{
	(void)other;
	return *this;
}

/* Methods */

Form	*Intern::makeForm(const std::string &name, const std::string &target)
{
	Form	*form;

	form = 0;
	const std::string knowForm[3] =
	{
		"Shrubbery",
		"Robotomy",
		"Presidential"
	};

	for (int i = 0; i < 3; ++i)
	{
		if (name == knowForm[i])
		{
			std::cout << GREEN;
			std::cout << "Intern creates " << name << std::endl;
			std::cout << F_NONE;
			switch (i) 
			{
				case 0: form = new ShrubberyCreationForm(target); break;
				case 1:	form = new RobotomyRequestForm(target); break;
				case 2: form = new PresidentialPardonForm(target); break;
				default: break;
			}
			return (form);
		}
	}
	throw (InternException("Unknown Form"));
}

/* Construtor Exeption */
Intern::InternException::InternException(const std::string &msg)
{
	std::cout << "InternException constructor call\n";
	this->_ErrorMsg = msg;
}

/* Destrictor */
Intern::InternException::~InternException() throw()
{
	std::cout << "InternException destructor call\n";
}

/* Overload basic methods */
const char *Intern::InternException::what(void) const throw()
{
	std::string tmp;

	tmp = RED;
	tmp += "InternException";
	if (!this->_ErrorMsg.empty())
	{
		tmp+= this->_ErrorMsg;
	}
	else
	{
		tmp+= "unknown error";
	}
	tmp+="\n";
	tmp+=F_NONE;
	return (tmp.c_str());
}