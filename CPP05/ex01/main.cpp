#include "Form.hpp"
#include "Bureaucrat.hpp"

void test_form()
{
	try
	{
		Form form("F1", 100, 100);
		std::cout << form.getName() << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cerr << "f1: " << exception.what() << std::endl;
	}
	try
	{
		Form form("F2", 0, 100);
		std::cout << form.getName() << std::endl;
	} 
	catch (std::exception &exception)
	{
		std::cerr << "f2: " << exception.what() << std::endl;
	}
	try
	{
		Form form("F3", 10, 0);
		std::cout << form.getName() << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cerr << "f3: " << exception.what() << std::endl;
	}
	try
	{
		Form form("F4", 151, 1);
		std::cout << form.getName() << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cerr << "f4: " << exception.what() << std::endl;
	}
	try
	{
		Form form("F5", 149, 151);
		std::cout << form.getName() << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cerr << "f5: " << exception.what() << std::endl;
	}
}

	void test()
	{
		Bureaucrat bureaucrat("Buro1", 100);
		std::cout << bureaucrat << std::endl;
		try {
			Form form("F1", 99, 100);
	//		std::cout << form << std::endl;
			bureaucrat.signForm(form);
		}catch (std::exception &exception){
			std::cerr << exception.what() << std::endl;
		}
		try {
			Form form("F2", 100, 99);
			bureaucrat.signForm(form);
			bureaucrat.signForm(form);
		}catch (std::exception &exception){
			std::cerr << exception.what() << std::endl;
		}
		try{
			Form form("F3", 101, 100);
			bureaucrat.signForm(form);
		} catch (std::exception &exception){
			std::cerr << exception.what() << std::endl;
		}
	}


int main()
{
	test_form();
	//test();
	return (0);
}