
#include <iostream>

/*
reinterpret_cast
Самое нахальное приведение типов. Не портируемо, результат может быть некорректным, никаких проверок не делается. Считается, что вы лучше компилятора знаете как на самом деле обстоят дела, а он тихо подчиняется.
Не может быть приведено одно значение к другому значению. Обычно используется, чтобы привести указатель к указателю, указатель к целому, целое к указателю. Умеет также работать со ссылками.

reinterpret_cast<whatever *>(some *)
reinterpret_cast<integer_expression>(some *)
reinterpret_cast<whatever *>(integer_expression)

Чтобы использовать reinterpret_cast нужны очень и очень веские причины. Используется, например, при приведении указателей на функции.
Что делает приведение типов в стиле С: пытается использовать static_cast, если не получается, использует reinterpret_cast. Далее, если нужно, использует const_cast .

*/

struct Data
{
	std::string		str_1;
	int				num;
	//int				num2;
	std::string		str_2;	
};

std::string	random_string()
{
	std::srand(time(NULL) * 42);
	std::string	result;
	char		c;

	for (int i = 0; i < 10; i++)
	{
		while (1)
		{
			c = rand() & 127;
			if (std::isprint(c))
				break ;
		}
		result += c;
	}
	return result;
}


// void * serialize(void)
// {
// 	std::srand(time(0));

// 	char *ptr = new char[52];

// 	std::string str_1  = random_string();
// 	int 		num  = rand() % 1000;
// 	std::string	str_2 = random_string();
	
// 	std::cout << "-------generated values-------" << std::endl;
// 	std::cout << "string 1:	" << str_1 << std::endl;
// 	std::cout << "number:		" << num << std::endl;
// 	std::cout << "string 2:	" << str_2 << std::endl;
// 	std::cout << "------------------------------" << std::endl;
// 	memcpy(ptr, &str_1, 24);
// 	memcpy(ptr + 24, &num, 4);
// 	memcpy(ptr + 28, &str_2, 24);
// 	return (ptr);
// }

void * serialize(void)
{
	std::srand(time(0));

	char *ptr = new char[52];
	Data *data = new Data;

	data->str_1 = random_string();
	data->num = rand() % 1000;
	data->str_2 = random_string();
	
	std::cout << "-------generated values-------" << std::endl;
	std::cout << "string 1:	" << data->str_1 << std::endl;
	std::cout << "number:		" << data->num << std::endl;
	std::cout << "string 2:	" << data->str_2 << std::endl;
	std::cout << "------------------------------" << std::endl;
	memcpy(ptr, data, 52);
	return (ptr);
}

// Data	*deserialize(void *ptr)
// {
// 	Data 	*data = new Data;
// 	char	*ptr_char;

// 	ptr_char = (char*)ptr;
// 	memcpy(&data->str_1, ptr_char     , 24);
// 	memcpy(&data->num  , ptr_char + 24, 4);
// 	memcpy(&data->str_2, ptr_char + 28, 24);
// 	return (data);
// }

// Data	*deserialize(void *ptr_data)
// {
// 	Data 	*data = new Data;
// 	char	*ptr;

// 	ptr = reinterpret_cast<char *>(ptr_data);
// 	data->str_1 = *(reinterpret_cast<std::string*>(ptr));
// 	data->num =  *(reinterpret_cast<int*>(ptr + 24));
// 	data->str_2 = *(reinterpret_cast<std::string*>(ptr + 28));
// 	return (data);
// }

Data *deserialize(void *ptr_data)
{
	return (reinterpret_cast<Data *>(ptr_data));
}

int main()
{
	void	*v = nullptr;
	Data	*d = nullptr;

	v = serialize();
	d = deserialize(v);
	
	if (d && v)
	{
		std::cout << "----deserialization result----" << std::endl;
		std::cout << "string 1:	" << d->str_1 << std::endl;
		std::cout << "number:       	" << d->num << std::endl;
		std::cout << "string 2:	" << d->str_2 << std::endl;
		std::cout << "------------------------------" << std::endl;
		delete d;
	}
	return 0;
}