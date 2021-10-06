/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:10:50 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/01 15:10:21 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
	ClapTrap	clap;
	ClapTrap	clap2("younes");

	clap = clap2;
	clap2.attack("choaib");
	clap2.takeDamage(2);
	clap2.beRepaired(4);
	clap.attack("ayoub");
	return 0;
}