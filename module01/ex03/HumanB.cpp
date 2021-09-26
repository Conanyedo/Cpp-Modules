/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 21:17:00 by ybouddou          #+#    #+#             */
/*   Updated: 2021/09/20 13:23:11 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
	
}

HumanB::~HumanB()
{
	
}

HumanB::HumanB(std::string name) : _type(nullptr)
{
	_name = name;
}

void		HumanB::attack()
{
	std::cout << _name << " attacks with his " << _type->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon& type)
{
	_type = &type;
}