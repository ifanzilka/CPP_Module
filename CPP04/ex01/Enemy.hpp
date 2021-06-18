#ifndef ENEMY_HPP
# define ENEMY_HPP

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

class Enemy
{
	private:
			/* Standart constructor */
			
			int			_hp;
			std::string _type;
	public:
			Enemy();
			/* Constructor */
			Enemy(int hp, std::string const & type);

			/* Destructor */
			virtual ~Enemy();

			/* Overlaod copy const*/
			Enemy(const Enemy & copy);

			/* Overload operator= */
			Enemy & operator=(const Enemy & obj);

			/* Methods */
			std::string 	getType() const;
			int 			getHP() const;

			/* Overlaod methods for Child */
			virtual void 	takeDamage(unsigned int damage);

			/* If this function don't vitrual
			** if call fun(Enemy * tmp)
			** all obj in call take famage Enemy
			** else takeDamage virtual child obj call new takeDamage
			*/
};


#endif