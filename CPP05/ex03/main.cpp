#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void) 
{

	Intern  someRandomIntern;
	Form*   rrf;

	try 
	{
		rrf = someRandomIntern.makeForm("Robotomy", "Bender");
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	try 
	{
		rrf = someRandomIntern.makeForm("Shrubbery", "Bender");
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	try 
	{
		rrf = someRandomIntern.makeForm("Presidential", "Bender");
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	return 0;
}