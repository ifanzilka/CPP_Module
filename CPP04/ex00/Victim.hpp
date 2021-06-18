#ifndef VICTIM_HPP
#define VICTIM_HPP

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

class Victim
{
protected:
		Victim();
		std::string _name;

public:
		/* Constructor */
		Victim(std::string name);
		
		/* Destructor */
		virtual ~Victim();

		/* Overload copy constructor */
		Victim(const Victim &copy);

		/* Overload operator= */
		Victim &operator=(const Victim &obj);

		/*Geters */
		const std::string getName() const;

		/* Methods */
		void Introduce() const ;

		/* This method can overload */
		virtual void getPolymorphed()const;

		/* This methods can't overload */
		//	 
		CALL IN PARENT METHODS void getPolymorphed()const;
};


std::ostream &operator<<(std::ostream &out, const Victim &victim);

#endif