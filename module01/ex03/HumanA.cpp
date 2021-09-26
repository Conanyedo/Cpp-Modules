/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 21:16:49 by ybouddou          #+#    #+#             */
/*   Updated: 2021/09/26 11:48:42 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::~HumanA()
{
	
}

HumanA::HumanA(std::string name, Weapon& type) : _type(type)
{
	_name = name;
}

void		HumanA::attack()
{
	std::cout << _name << " attacks with his " << _type.getType() << std::endl;
}