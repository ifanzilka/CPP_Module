#include <iostream>
#include "Base.hpp"

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

/*
dynamic_cast
Безопасное приведение по иерархии наследования, в том числе и для виртуального наследования.
dynamic_cast<derv_class *>(base_class_ptr_expr)

Используется RTTI (Runtime Type Information), чтобы привести один указатель на объект класса к другому указателю на объект класса.
Классы должны быть полиморфными, то есть в базовом классе должна быть хотя бы одна виртуальная функция. Если эти условие не соблюдено, ошибка возникнет на этапе компиляции.
Если приведение невозможно, то об этом станет ясно только на этапе выполнения программы и будет возвращен NULL.

dynamic_cast<derv_class &>(base_class_ref_expr)

Работа со ссылками происходит почти как с указателями, но в случае ошибки во время исполнения будет выброшено исключение bad_cast.
*/

Base * generate(void)
{
	
	int	num = std::rand() % 3;
	if (num == 0)
	{
		std::cout << GREEN;
		std::cout << "A generated" << std::endl;
		std::cout << F_NONE;
		return (new A);
	}
	else if (num == 1)
	{
		std::cout << GREEN;
		std::cout << "B generated" << std::endl;
		std::cout << F_NONE;
		return (new B);
	}
	else
	{
		std::cout << GREEN;
		std::cout << "C generated" << std::endl;
		std::cout << F_NONE;
		return (new C);
	}
}

void identify_from_pointer(Base * p)
{
	if (!p)
		return;

	A *a;
	B *b;
	C *c;

	a = dynamic_cast< A* >(p);
	b = dynamic_cast< B* >(p);
	c = dynamic_cast< C* >(p);
	if (a != NULL)
	{
		std::cout << GREEN;
		std::cout << "Successfully in dentify_from_pointer in class A" << std::endl;
		std::cout << F_NONE;
		return;
	}
	else if (b != NULL)
	{
		std::cout << GREEN;
		std::cout << "Successfully in dentify_from_pointer in class B" << std::endl;
		std::cout << F_NONE;
		return;
	}
	else if (c != NULL)
	{
		std::cout << GREEN;
		std::cout << "Successfully in dentify_from_pointer in class C" << std::endl;
		std::cout << F_NONE;
		return;
	}
	std::cout << RED;
	std::cout << "Fail in dentify_from_pointer";
	std::cout << F_NONE;

}

void identify_from_reference( Base & p)
{
	A a;
	B b;
	C c;

	try
	{
		a = dynamic_cast< A &>(p);
		std::cout << GREEN;
		std::cout << "Successfully in identify_from_reference in class A" << std::endl;
		std::cout << F_NONE;
		return ;
	}
	catch(std::exception & ex)
	{
		std::cout << RED;
		std::cout << ex.what() << std::endl;
		std::cout << "Fail in identify_from_reference class A\n";
		std::cout << F_NONE;
	}

	try
	{
		b = dynamic_cast< B &>(p);
		std::cout << GREEN;
		std::cout << "Successfully in identify_from_reference in class B" << std::endl;
		std::cout << F_NONE;
		return ;
	}
	catch(std::exception & ex)
	{
		std::cout << RED;
		std::cout << ex.what() << std::endl;
		std::cout << "Fail in identify_from_reference class B\n";
		std::cout << F_NONE;
	}

	try
	{
		c = dynamic_cast< C &>(p);

		std::cout << GREEN;
		std::cout << "Successfully in identify_from_reference in class C" << std::endl;
		std::cout << F_NONE;
		return ;
	}
	catch(std::exception & ex)
	{
		std::cout << RED;
		std::cout << ex.what() << std::endl;
		std::cout << "Fail in identify_from_reference class C\n";
		std::cout << F_NONE;
	}
	
}

int	main(void)
{
	std::srand(time(0));

	std::cout << "generating pointer ..." << std::endl;
	Base	*temp_p = generate();

	std::cout << "identifying pointer: \n";
	identify_from_pointer(temp_p);
	
	std::cout << "\n\n~~~~~~~~~~~~~~~~~~~" << std::endl;
	std::cout << "generating reference ..." << std::endl;
	
	Base	&temp_r = *generate();
	
	std::cout << "identifying reference :\n";
	identify_from_reference(temp_r);
	return (0);
}