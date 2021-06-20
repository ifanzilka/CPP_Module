#include "Converter.hpp"

/*
** static_cast
** Может быть использован для приведения одного типа к другому. Если это встроенные типы, то будут использованы встроенные в C++ правила их приведения.
** Если это типы, определенные программистом, то будут использованы правила приведения, определенные программистом.
** static_cast между указателями корректно, только если один из указателей - это указатель на void или если это приведение между объектами классов,
** где один класс является наследником другого. То есть для приведения к какому-либо типу от void*, который возвращает malloc, следует использовать static_cast.
*/


/* Constructor */
Converter::Converter(std::string const & literal) : _literal(literal)
	,_char(0)
	, _char_status("~")
	, _int(0)
	, _int_status("~")
	, _float(0)
	, _float_status("~")
	, _double(0)
	, _double_status("~")
{
	isLiteralValidChar();
	isLiteralValidInt();
	isLiteralValidFloat();
	isLiteralValidDouble();
	//std::cout << "Covert construtor call\n";
}


/* Destructor */
Converter::~Converter()
{
	//std::cout << "Convert destructor call\n";
}

/* Overload copy constructor */
Converter::Converter(const Converter & copy)
{
	*this = copy;
}

/* Overlaod operator= */
Converter & Converter::operator=(const Converter & obj)
{
	if (this == &obj)
		return (*this);
	/* Copy elem */

	return (*this); 
}

/* Getters */

const std::string & Converter::getLiteral(void) const
{
	return (this->_literal);
}

/* Private methods */

void Converter::isLiteralValidChar(void)
{
	try 
	{
		if (_literal.length() == 1 && !std::isdigit(_literal[0]))
		{
			_char = static_cast<char>(_literal[0]);
		}	
		else if (std::stoi(_literal) >= 0 && std::stoi(_literal) <= 127)
		{
			_char = static_cast<char>(std::stoi(_literal));
		}
		else
			throw (-42);
		if (std::isprint(_char))
			_char_status = "ok";
		else
			_char_status = "non displayable";	
	}
	catch(...)
	{
		_char_status = "impossible";
	}
}

void Converter::isLiteralValidInt (void)
{
	try
	{	
		/* Check ascci */ 
		if (_literal.length() == 1 && !std::isdigit(_literal[0]) && std::isprint(_literal[0]))
		{
			/* static_cast<int> */
			_int = static_cast<int>(_literal[0]);
		}
		else
		{
			_int = static_cast<int>(std::stoi(_literal));
		}
		_int_status = "ok";

	}
	catch(...)
	{
		_int_status = "impossible";
	}
}

void Converter::isLiteralValidFloat(void)
{
	try
	{
		/* Check ascci */ 
		if (_literal.length() == 1 && !std::isdigit(_literal[0]) && std::isprint(_literal[0]))
		{
			/* static_cast<int> */
			_float = static_cast<float>(_literal[0]);
		}
		else
		{
			_float = static_cast<float>(std::stof(_literal));
			_float_status = "ok";
		}
	}
	catch(...)
	{
		_float_status = "impossible";
	}
}

void Converter::isLiteralValidDouble(void)
{
		try
	{
		/* Check ascci */ 
		if (_literal.length() == 1 && !std::isdigit(_literal[0]) && std::isprint(_literal[0]))
		{
			/* static_cast<int> */
			_double = static_cast<double>(_literal[0]);
		}
		else
		{
			_double = static_cast<double>(std::stod(_literal));
			_double_status = "ok";
		}
	}
	catch(...)
	{
		_double_status = "impossible";
	}
}



/* Methods */


void	Converter::printChar() const
{
	std::cout << "char: ";
	if (_char_status == "ok")
		std::cout << _char;
	else
		std::cout << _char_status;
	std::cout << std::endl;
}

void	Converter::printInt() const
{
	std::cout << "int: ";
	if (_int_status == "ok")
		std::cout << _int;
	else
		std::cout << _int_status;
	std::cout << std::endl;
}

void	Converter::printFloat() const
{
	std::cout << "float: ";
	if (_float_status == "ok")
	{
		std::cout << _float;
		if (static_cast<int>(_float) - _float == 0.f && _float < 1000000.f)
			std::cout << ".0";
		std::cout << "f";
	}
	else
		std::cout << _float_status;
	std::cout << std::endl;
}

void	Converter::printDouble() const
{
	std::cout << "double: ";
	if (_double_status == "ok")
	{
		std::cout << _double;
		if (static_cast<int>(_double) - _double == 0. && _float < 1000000.)
			std::cout << ".0";
	}
	else
		std::cout << _double_status;
	std::cout << std::endl;
}

void	Converter::print() const
{
	printChar();
	printInt();
	printFloat();
	printDouble();
}