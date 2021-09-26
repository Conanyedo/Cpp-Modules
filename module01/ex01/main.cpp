/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 15:47:40 by ybouddou          #+#    #+#             */
/*   Updated: 2021/09/26 15:14:37 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main()
{
	Zombie zombie("Creeper");
	Zombie *newzombie;
	std::string	str = "Roamer";
	int		i;

	zombie.announce();
	newzombie = zombieHorde(5, str);
	i = -1;
	while (newzombie && ++i < 5)
		newzombie[i].announce();
	delete [] newzombie;
}