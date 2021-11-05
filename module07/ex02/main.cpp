/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:01:25 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/05 15:21:15 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	arr = NULL;
	n = 0;
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->arr;
}

template <typename T>
Array<T>::Array(unsigned int n) : n(n)
{
	unsigned int		i;

	i = -1;
	this->arr = new T[n];
	while (++i < n)
		this->arr[i] = 0;
}

template <typename T>
Array<T>::Array(const Array& copy)
{
	*this = copy;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array& copy)
{
	if (this != &copy)
	{
		unsigned int	i;

		i = -1;
		this->n = copy.n;
		this->arr = new T[n];
		while (++i < n)
			this->arr[i] = copy.arr[i];
	}
	return (*this);
}

template <typename T>
T&	Array<T>::operator[](unsigned int n)
{
	if (n >= this->n || n < 0)
		throw invalidIndex();
	return this->arr[n];
}

template <typename T>
unsigned int		Array<T>::size()
{
	return (n);
}

template <typename T>
const char* Array<T>::invalidIndex::what() const throw()
{
	return ("Invalid index!!");
}

int		main()
{
	Array<char>		str(6);
	Array<int>		tab_int(6);
	unsigned int	i;
	int		random;

	i = -1;
	std::cout << "tab_int size: " << tab_int.size() << std::endl;
	while (++i < tab_int.size())
	{
		tab_int[i] = i + 33;
		std::cout << "tab_int[" << i << "] = " << tab_int[i] << std::endl;
	}
	std::cout << "----------------------\n";
	i = -1;
	std::cout << "str size: " << str.size() << std::endl;
	while (++i < str.size())
	{
		str[i] = i + 33;
		std::cout << "str[" << i << "] = " << str[i] << std::endl;
	}
	std::cout << "----------------------\n";
	{
		i = -1;
		Array<char>		str_cp;
		
		str_cp = str;
		std::cout << "str_cp size: " << str_cp.size() << std::endl;
		while (++i < str_cp.size())
			std::cout << "str_cp[" << i << "] = " << str_cp[i] << std::endl;
	}
	std::cout << "----------------------\n";
	i = -1;
	while (++i < str.size())
		std::cout << "str[" << i << "] = " << str[i] << std::endl;
	std::cout << "----------------------\n";
	try
	{
		srand (time(NULL));
		random = rand() % (str.size() + 5);
		str[random];
		std::cout << "---------------\n" << random << " is a Valid index!\nstr[" << random << "] = " << str[random] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << random << " is an " << e.what() << '\n';
	}
	return (0);
}