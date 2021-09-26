/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 13:08:27 by ybouddou          #+#    #+#             */
/*   Updated: 2021/09/22 11:24:54 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main()
{
	Zombie zombie("Creeper");
	Zombie *newzombie;

	zombie.announce();
	newzombie = newZombie("Roamer");
	newzombie->announce();
	delete newzombie;
	randomChump("Biter");
}