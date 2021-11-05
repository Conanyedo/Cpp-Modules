/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:01:23 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/05 18:31:32 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <string>
#include <exception>
#include <time.h>

template <typename T>
class	Array
{
	private:
		T	*arr;
		unsigned int	n;
	public:
		class invalidIndex : public std::exception
		{
			public:
				const char* what() const throw(){return ("Invalid index!!");}
		};
		Array<T>()
		{
			arr = NULL;
			n = 0;
		};
		Array<T>(unsigned int n) : n(n)
		{
			unsigned int		i;

			i = -1;
			this->arr = new T[n]();
		}
		Array<T>(const Array& copy)
		{
			this->arr = nullptr;
			*this = copy;
		}
		Array<T>&	operator=(const Array& copy)
		{
			if (this != &copy)
			{
				unsigned int	i;

				i = -1;
				delete [] this->arr;
				this->n = copy.n;
				this->arr = new T[n];
				while (++i < n)
					this->arr[i] = copy.arr[i];
			}
			return (*this);
		}
		T&	operator[](unsigned int n)
		{
			if (n >= this->n || n < 0)
				throw invalidIndex();
			return this->arr[n];
		}
		unsigned int	size(){return (n);}
		~Array()
		{
			delete [] this->arr;
		}
};

#endif