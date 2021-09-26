/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 21:17:18 by ybouddou          #+#    #+#             */
/*   Updated: 2021/09/22 11:39:32 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	
}

Weapon::~Weapon()
{
	
}

Weapon::Weapon(std::string type)
{
	_type = type;
}

const std::string&	Weapon::getType()
{
	return (_type);
}

void				Weapon::setType(const std::string& type)
{
	_type = type;
}