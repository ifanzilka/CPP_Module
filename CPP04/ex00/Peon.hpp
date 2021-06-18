#ifndef PEON_HPP
#define PEON_HPP

#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
private:
		Peon();
public:
		/* Constructor */
		Peon(const std::string name);

		/* Destructor */
		~Peon();

		/* Overload copy constuctor */
		Peon(const Peon &copy);

		/* Overload operator= */
		Peon&operator=(const Peon &copy);

		/* Overload parent method */
		void 	getPolymorphed()const;

};



#endif