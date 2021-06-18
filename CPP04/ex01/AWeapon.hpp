#ifndef AWEAPON_HPP
# define AWEAPON_HPP


#include <iostream>
#include <ostream>

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


/* This class Abstract and we don't can create instance class */

class AWeapon
{
	protected:
			AWeapon();
			std::string	_name;
			int			_actionPoints;
			int 		_numDamage;
	public:
			/* Constructor */
			AWeapon(std::string const & name, int apcost, int damage);
			
			/* Desctructor */
			virtual ~AWeapon();


			/* If Destructor no virtual: */
			/*	ERROR : delete called on 'AWeapon' that is abstract but has non-virtual destructor (delete child obj)
			**	
			*/

			/* Overload copy constructor */
			AWeapon(const AWeapon & copy);

			/* Overload operator=*/
			AWeapon&operator=(const AWeapon & obj);

			std::string 	getName() const;
			int 			getAPCost() const;
			int 			getDamage() const;
			
			/* This methods overload my parents */
			/* чисто виртуальная функция */
			virtual void 	attack() const = 0;
};

std::ostream &operator<<(std::ostream& out, const AWeapon & obj);

#endif