#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	private:

	public:
			/* Constructor */
			FragTrap();
			FragTrap(std::string name);

			/* Destructor */
			~FragTrap();

			/* Copy constructor */
			FragTrap(const FragTrap &other);

			/* Operation overload = */
			FragTrap &operator=(const FragTrap &other);

			/* new methods */
			void vaulthunter_dot_exe(const std::string &target);
};