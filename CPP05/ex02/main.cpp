#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	TestShrubberyCreationForm()
{
	std::cout << CYANE;
	std::cout << "\n\n----------TEST ShrubberyCreationForm ------------\n" << std::endl;
	std::cout << F_NONE;
	try
	{
		Bureaucrat a("a", 10);
		ShrubberyCreationForm tree("file");
		tree.execute(a);
	}
	catch (std::exception &exception)
	{
		std::cerr << "TestShrubberyCreationForm (Execption):\n" << exception.what() << std::endl;
	}
	std::cout << CYANE;
	std::cout << "\n----------END TEST ShrubberyCreationForm ------------\n\n" << std::endl;
	std::cout << F_NONE;
}

void	TestRobotomyRequestForm()
{
	std::cout << CYANE;
	std::cout << "\n\n----------TEST TestRobotomyRequestForm ------------\n" << std::endl;
	std::cout << F_NONE;
	try
	{
		Bureaucrat a("a", 149);
		RobotomyRequestForm robo("robo");
		robo.execute(a);
	}
	catch (std::exception &exception)
	{
		std::cerr << "TestRobotomyRequestForm (Execption):\n" << exception.what() << std::endl;
	}
	std::cout << CYANE;
	std::cout << "\n----------END TEST TestRobotomyRequestForm ------------\n\n" << std::endl;
	std::cout << F_NONE;
}

void 	TestPresidentialPardonForm()
{
	std::cout << CYANE;
	std::cout << "\n\n----------TEST TestPresidentialPardonForm ------------\n" << std::endl;
	std::cout << F_NONE;
	try
	{
		Bureaucrat a("a", 19);
		PresidentialPardonForm city("city");
		city.execute(a);
	}
	catch (std::exception &exception)
	{
		std::cerr << "TestPresidentialPardonForm (Execption):\n" << exception.what() << std::endl;
	}
	std::cout << CYANE;
	std::cout << "\n----------END TEST TestPresidentialPardonForm ------------\n\n" << std::endl;
	std::cout << F_NONE;

}

int main()
{
	//TestShrubberyCreationForm();
	//TestRobotomyRequestForm();
	//TestPresidentialPardonForm();	
}