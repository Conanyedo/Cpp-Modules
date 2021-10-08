/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:10:50 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/08 11:00:32 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void )
{
	ClapTrap	clap("younes");
	ScavTrap	scav("khldoun");
	FragTrap	frag("hamza");

	clap.attack("ayoub");
	scav.attack("abdlah");
	scav.guardGate();
	frag.highFivesGuys();
	return 0;
}