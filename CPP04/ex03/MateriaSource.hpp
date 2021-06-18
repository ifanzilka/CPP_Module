#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"


class MateriaSource : public IMateriaSource 
{
	private:
			/* data */
			AMateria *_source[4];
	public:
			/* Constructor */
			MateriaSource(/* args */);
			
			/* Destructor */
			~MateriaSource();

			/* Overload copy constructor */
			MateriaSource(const MateriaSource & copy);

			/* Overload operator= */
			MateriaSource &operator=(const MateriaSource & obj);

			/* Overload Methods */

			void learnMateria(AMateria *materia) ;
			AMateria *createMateria(const std::string &type);

};

#endif