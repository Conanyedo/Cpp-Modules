/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:34:00 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/08 11:15:15 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main()
{
	std::vector<int>	vect;
	int					length;
	int					i;

	i = -1;
	length = 5;
	while (++i < length)
		vect.push_back(i);
	try
	{
		std::cout << "-----------Try with vector as container----------------\n\n";
		easyfind(vect, 0);
		easyfind(vect, 4);
		easyfind(vect, 1);
		easyfind(vect, 5);
		easyfind(vect, 2);
	}
	catch(const std::exception& e){std::cerr << e.what() << '\n';}
	return (0);
}