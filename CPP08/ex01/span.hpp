#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	private:
			/* data */
			Span();
			unsigned int 		_size;
			std::vector<int> 	_array;
	public:
			/* Constructor */
			Span(unsigned int size);
			
			/* Destructor */
			~Span();

			/* Overload copy constructor */
			Span(const Span & copy);

			/* Overload operator= */
			Span & operator=(const Span & obj);

			/* Getters */

			unsigned int getSize() const;
			unsigned int getCnt() const;

			/* Methods */
			void	addNumber(const int num);
			int 	shortestSpan();
			int 	longestSpan();


			/* Create Exeption */
			class SpanException: public std::exception
			{
				private:
						std::string _ErrorMsg;
				public:
						/* Constructor */
						SpanException(const std::string &error);
						//GradeTooHighException(const char * error);

						/* Destructor */
						~SpanException() throw();

						/* Methods overload */
						const char *what() const throw();
			};

};


#endif