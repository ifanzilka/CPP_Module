#ifndef CONVERTER_HPP
# define CONVERTER_HPP

#include <iostream>

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

class Converter
{
	private:
			/* data */
			Converter(/* args */);
			std::string		_literal;

			char			_char;
			std::string		_char_status;

			int				_int;
			std::string		_int_status;

			float			_float;
			std::string		_float_status;

			double			_double;
			std::string		_double_status;

			/* Private Methods */
			void	isLiteralValidChar();
			void	isLiteralValidInt();
			void	isLiteralValidFloat();
			void	isLiteralValidDouble();
	public:
			/* Constructor */
			Converter(std::string const &_literal);

			/* Destructor */
			~Converter();

			/* Overload copy constructor */
			Converter(const Converter & copy);

			/* Overload operator= */
			Converter & operator=(const Converter  &obj);

			/* Getters */
			const std::string & getLiteral() const;


			/* Methods */
			void	printChar() const;
			void	printInt() const;
			void	printFloat() const;
			void	printDouble() const;
			
			void	print() const;
};

#endif