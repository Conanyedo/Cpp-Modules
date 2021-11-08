/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:34:24 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/08 13:31:09 by ybouddou         ###   ########.fr       */
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
	std::vector<int>::iterator		it;

	it = std::find(temp.begin(), temp.end(), find);
	if (it != temp.end())
		std::cout << " value found on this container!!\n";
	else
		throw notFound();
}

#endif