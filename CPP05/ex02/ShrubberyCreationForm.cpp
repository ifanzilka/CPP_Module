#include "ShrubberyCreationForm.hpp"

/* Constructor */

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):Form("ShrubberyCreation", 145, 137), _target(target)
{

}

/* Destrutor */

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}

/* Overload copy constructor */

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) : Form(copy)
{
	*this = copy;
}

/* Overload operator= */
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & copy)
{
	if (this == &copy)
		return (*this);
	this->_target = copy._target;
	return (*this);
}

/* Getters */
std::string const& ShrubberyCreationForm::getTarget() const
{
	return _target;
}

/* Methods */

void	ShrubberyCreationForm::execute(const Bureaucrat  & executor)
{
	/* Create file target__shrubbery and write three */
	Form::execute(executor);

	std::ofstream out(_target + "_shrubbery");
	if (out.is_open())
	{
			out << GREEN;
			out << "The Worm's Turn\n"
				 "\n"
				 "             _{\\ _{\\{\\/}/}/}__\n"
				 "            {/{/\\}{/{/\\}(\\}{/\\} _\n"
				 "           {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n"
				 "        {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
				 "       {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
				 "      _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
				 "     {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
				 "     _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n"
				 "    {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
				 "     {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
				 "      {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
				 "     {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n"
				 "      {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"
				 "        {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
				 "         (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
				 "           {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"
				 "            {/{\\{\\{\\/}/}{\\{\\\\}/}\n"
				 "             {){/ {\\/}{\\/} \\}\\}\n"
				 "             (_)  \\.-'.-/\n"
				 "         __...--- |'-.-'| --...__\n"
				 "  _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n"
				 "-\"    ' .  . '    |.'-._| '  . .  '   . \n"
				 ".  '-  '    .--'  | '-.'|    .  '  . '\n"
				 "         ' ..     |'-_.-|\n"
				 " .  '  .       _.-|-._ -|-._  .  '  .\n"
				 "             .'   |'- .-|   '.\n"
				 " ..-'   ' .  '.   `-._.-´   .'  '  - .\n"
				 "  .-' '        '-._______.-'     '  .\n"
				 "       .      ~,\n"
				F_NONE;
				out <<"" 
				 "   .       .   |\\   .    ' '-.\n"
				 "   ___________/  \\____________\n"
				 "  /  Why is it, when you want \\\n"
				 " |  something, it is so damn   |\n"
				 " |    much work to get it?     |\n"
				 "  \\___________________________/\n"
				 "\n"
				 "------------------------------------------------\n" << std::endl;
		out.close();
	}
	else
	{
		throw ShrubberyCreationForm::ShrubberyException("File is not open");
	}
}



/* Construtor Exeption */
ShrubberyCreationForm::ShrubberyException::ShrubberyException(const std::string &msg)
{
	std::cout << "ShrubberyException constructor call\n";
	this->_ErrorMsg = msg;
}

/* Destrictor */
ShrubberyCreationForm::ShrubberyException::~ShrubberyException() throw()
{
	std::cout << "ShrubberyException destructor call\n";
}

/* Overload basic methods */
const char *ShrubberyCreationForm::ShrubberyException::what(void) const throw()
{
	std::string tmp;

	tmp = RED;
	tmp += "ShrubberyException";
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