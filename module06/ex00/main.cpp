/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:13:32 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/30 12:34:08 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int		main(int ac, char **av)
{
	if (ac == 2)
	{
		char_converter(av[1]);
		int_converter(av[1]);
		float_converter(av[1]);
		double_converter(av[1]);
	}
	else
		std::cout << "Wrong number of arguments!!!\n";
	return (0);
}