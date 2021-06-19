#include "Bureaucrat.hpp"


void test_exception() {
	
	try 
	{
		Bureaucrat bureaucrat("Buro1", 1);
	}
	catch (Bureaucrat::GradeTooHighException &ex)
	{
		std::cerr << "1:(GradeTooHighException) " << ex.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &ex)
	{
		std::cerr << "1:(GradeTooLowException) " << ex.what() << std::endl;
	} 
	catch (std::exception &exception) 
	{
		std::cerr << "1: " << exception.what() << std::endl;
	}


	try 
	{
		Bureaucrat bureaucrat("Buro2", -11);
	}
	catch (Bureaucrat::GradeTooHighException &ex)
	{
		std::cerr << "2:(GradeTooHighException) " << ex.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &ex)
	{
		std::cerr << "2:(GradeTooLowException) " << ex.what() << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cerr << "2: " << exception.what() << std::endl;
	}


	try 
	{
		Bureaucrat bureaucrat("Buro3", 153);
	}
	catch (Bureaucrat::GradeTooHighException &ex)
	{
		std::cerr << "3:(GradeTooHighException) " << ex.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &ex)
	{
		std::cerr << "3:(GradeTooLowException) " << ex.what() << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cerr << "3: " << exception.what() << std::endl;
	}


	try 
	{
		Bureaucrat bureaucrat("Buro4", 149);
		bureaucrat.decGrade();
		std::cout << "dec2" << std::endl;
		bureaucrat.incGrade();
		bureaucrat.incGrade();
		bureaucrat.incGrade();
	}
	catch (Bureaucrat::GradeTooHighException &ex)
	{
		std::cerr << "4:(GradeTooHighException) " << ex.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &ex)
	{
		std::cerr << "4:(GradeTooLowException) " << ex.what() << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cerr << "4: " << exception.what() << std::endl;
	}



	try 
	{
		Bureaucrat bureaucrat("Buro5", 2);
		bureaucrat.decGrade();
		std::cout << "inc2" << std::endl;
		bureaucrat.decGrade();
		bureaucrat.decGrade();
	}
	catch (Bureaucrat::GradeTooHighException &ex)
	{
		std::cerr << "5:(GradeTooHighException) " << ex.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &ex)
	{
		std::cerr << "5:(GradeTooLowException) " << ex.what() << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cerr << "5: " << exception.what() << std::endl;
	}


	Bureaucrat *bureaucrat;
	try 
	{
		bureaucrat 	= new Bureaucrat("Buro 6", 0);
	}
	catch (Bureaucrat::GradeTooHighException &ex)
	{
		std::cerr << "6:(GradeTooHighException) " << ex.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException &ex)
	{
		std::cerr << "6:(GradeTooLowException) " << ex.what() << std::endl;
	}
	catch (std::exception &exception)
	{
		std::cerr << "6: " << exception.what() << std::endl;
		delete bureaucrat;
	}

}

void test() 
{
	std::cout << "TEST------------" << std::endl;
	Bureaucrat bureaucrat("BuroTest", 1);
	std::cout << bureaucrat << std::endl;
	bureaucrat.decGrade();
	std::cout << bureaucrat << std::endl;
	bureaucrat.incGrade();
	std::cout << bureaucrat << std::endl;
	std::cout << "----------------" << std::endl;
}


int main()
{
	//test();
	test_exception();
}

