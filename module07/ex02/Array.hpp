/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 15:01:23 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/02 09:46:57 by ybouddou         ###   ########.fr       */
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
				const char* what() const throw();
		};
		Array<T>();
		Array<T>(unsigned int n);
		Array<T>(const Array& copy);
		Array<T>&	operator=(const Array& copy);
		T&	operator[](unsigned int);
		unsigned int	size();
		~Array();
};

#endif