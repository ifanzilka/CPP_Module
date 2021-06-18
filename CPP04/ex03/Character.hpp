#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
			/* data */
			std::string _name;
			AMateria*	_amateria[4];
			Character(/* args */);
	public:
			/* Constructor */
			Character(const std::string &name);
			/* Destructor */
			~Character();

			/* Overload  copy constructor */
			Character(const Character & copy);

			/* Overload operator= */
			Character & operator=(const Character & obj);

			/* Methods */
			
			const std::string	&getName() const;
			void 				equip(AMateria *m);
			void 				unequip(int index);
			void 				use(int index, ICharacter &target);
};
#endif