#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template <class T>

typename T::iterator easyFind(T & arr, int num)
{
	/* Example Iterators

	std::vector<int> myVector;
	
	std::vector<int>::iterator it;
	
	it = myVector.begin(); // присваиваем ему начальный элемент вектора
	while (it != myVector.end()) // пока итератор не достигнет последнего элемента
    {
        std::cout << *it << " "; // выводим значение элемента, на который указывает итератор
        ++it; // и переходим к следующему элементу
    }

	std::list<int> myList;
    for (int count=0; count < 5; ++count)
        myList.push_back(count);

    std::list<int>::const_iterator it; // объявляем итератор
    it = myList.begin(); // присваиваем ему начальный элемент списка
    while (it != myList.end()) // пока итератор не достигнет последнего элемента
    {
        std::cout << *it << " "; // выводим значение элемента, на который указывает итератор
        ++it; // и переходим к следующему элементу
    }

	*/

	typename T::iterator 	it;
	int						i;

	i = 0;
	it = arr.begin();
	while (it != arr.end())
	{	
		if (i == num)
			return (it);
		i++;
		it++;
	}
	if (it == arr.end())
	{
		throw std::runtime_error("not found!");
	}
	return(it);
}

#endif