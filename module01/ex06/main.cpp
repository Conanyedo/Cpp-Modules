/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 16:34:49 by ybouddou          #+#    #+#             */
/*   Updated: 2021/09/20 19:06:29 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int ac, char **av)
{
	Karen	karen;
	std::string		log;

	if (ac != 2)
		return (1);
	log = av[1];
	karen.complain(log);
	return (0);
}