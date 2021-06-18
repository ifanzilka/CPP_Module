#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "AWeapon.hpp"
#include "Enemy.hpp"
#include <iostream>

class Character
{
	private:
		/* data */
		Character();
		std::string _name;
		AWeapon*	_weapon;
		int			_actPoint;
	public:

		/* Constructor */
		Character(std::string const & name);
		
		/* Destructor */
		~Character();

		/* Overload copy constructor */
		Character(const Character & copy);

		/* Overload operator=*/
		Character&operator=(const Character	 & obj);

		/* methods */
		void 		recoverAP();
		void 		equip(AWeapon*);
		void 		attack(Enemy *& enemy);
		const std::string &getName() const;

		/* Getters */
		AWeapon* 	getWeapon() const;
		int			getActionPoint() const;
};	

std::ostream& operator<<(std::ostream & out, const Character & obj);

#endif