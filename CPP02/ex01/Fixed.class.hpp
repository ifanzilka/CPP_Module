#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>
//const int Fixed::_offset = 8;

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

class Fixed
{
private:
		int 				_value;
		static const int	_offset;
public:

    	/* Constructor  */
        Fixed();
		Fixed(int const value);
		Fixed(float const value);

		/* Copy constructor */
		Fixed(const Fixed &obj);

        /* Destructor */
        ~Fixed();

		/*Methods*/
		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
		float 	toFloat(void) const;
		int		toInt(void) const;


        /* Operation overload = */

		Fixed&	operator=(const Fixed &obj);
		
		//Fixed operator = (const Fixed &obj);
		//Fixed* operator = (const Fixed &obj);

		
};
std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif