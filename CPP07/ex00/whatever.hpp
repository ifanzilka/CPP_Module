#ifndef WHATEVER_HPP
# define  WHATEVER_HPP

namespace ft_42
{
	template <class T>

	void swap(T &a, T&b)
	{
		T tmp;

		tmp  = a;
		a = b;
		b = tmp;
		//a,b = b,a;
	}

	template <class T>
	T min(T & a, T & b)
	{
		if (b <= a)
			return (b);
		return (a);
	}

	template <class T>

	T max(T &a, T &b)
	{
		if (a >= b)
			return (a);
		return (b);	
	}

}

#endif