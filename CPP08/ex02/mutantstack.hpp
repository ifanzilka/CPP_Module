#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
# include <stack>

template <typename T>

class MutantStack : public std::stack<T>
{
	private:
			/* data */
	public:
			/* Constructor */
			MutantStack(/* args */);
			//Mutantstack(): std::stack<T>(){};
			
			/* Destructor */
			~MutantStack();

			/* Overload copy constructor */
			MutantStack(const MutantStack<T> &other);

			/* Overload operator= */
			MutantStack<T> &operator=(MutantStack<T> const &other);
			
			/* one methods */
			typedef typename std::stack<T>::container_type::iterator iterator;
			typedef typename std::stack<T>::container_type::const_iterator const_iterator;
			typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
			typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

			iterator begin(void);
			const_iterator begin(void) const;
			reverse_iterator rbegin(void);
			const_reverse_iterator rbegin(void) const;
			iterator end(void);
			const_iterator end(void) const;
			reverse_iterator rend(void);
			const_reverse_iterator rend(void) const;


			/* Other Methods */

		// class iterator;
		// iterator begin() { return (&this->top()); }
		// iterator end()
		// {
		// 	iterator tmp = this->begin();
		// 	for (size_t i = 0; i < this->size(); i++)
		// 		++tmp;
		// 	return (tmp);
		// }
		// class iterator
		// {
		// 	private:
		// 		T* cur;
		// 	public:
		// 		iterator(T *first) : cur(first) {};
		// 		T &operator++(int) {return (*(cur--)); };
		// 		T &operator--(int) {return (*(cur++)); };
		// 		T &operator++() {return (*(cur--)); };
		// 		T &operator--() {return (*(cur++)); };
		// 		bool operator!=(const iterator &it) { return (cur != it.cur); };
		// 		bool operator==(const iterator &it) { return (cur == it.cur); };
		// 		T &operator*() { return (*cur); };
		// };


};			
//#include "mutantstack.cpp"

#endif