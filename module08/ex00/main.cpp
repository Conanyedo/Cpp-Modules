/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:34:00 by ybouddou          #+#    #+#             */
/*   Updated: 2022/04/13 01:37:00 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <deque>

int		main()
{
	std::deque<int>		deque;
	// std::vector<int>	vec;
	int					length;
	int					i;

	i = -1;
	length = 5;
	while (++i < length)
		deque.push_back(i);
	try
	{
		easyfind<std::deque<int> >(deque, 0);
		easyfind<std::deque<int> >(deque, 4);
		easyfind<std::deque<int> >(deque, 1);
		easyfind<std::deque<int> >(deque, 5);
		easyfind<std::deque<int> >(deque, 2);
	}
	catch(const std::exception& e){std::cerr << e.what() << '\n';}
	return (0);
}