/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:34:24 by ybouddou          #+#    #+#             */
/*   Updated: 2022/04/13 01:36:38 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <exception>
#include <vector>
#include <algorithm>

class notFound : public std::exception
{
	public:
		const char* what() const throw(){return (" value not found on this container!!");}
};

template <typename T>
void	easyfind(T temp, int find)
{
	typename T::iterator		it;

	it = std::find(temp.begin(), temp.end(), find);
	std::cout << find;
	if (it == temp.end())
		throw notFound();
	std::cout << " value found on this container!!\n";
}

#endif