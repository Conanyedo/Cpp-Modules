/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:12:17 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/04 15:40:16 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : Name(name), Hitpoints(10), Energy_points(10),
	Attack_damage(0)
{
	std::cout << "ClapTrap Constructor has been called!!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor has been called!!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	std::cout << "ClapTrap Copy Constrctor has been Called!!" << std::endl;
	*this = copy;
}

ClapTrap&	ClapTrap::operator= (const ClapTrap& copy)
{
	std::cout << "ClapTrap Assignation operator called!" << std::endl;
	this->Name = copy.Name;
	this->Hitpoints = copy.Hitpoints;
	this->Energy_points = copy.Energy_points;
	this->Attack_damage = copy.Attack_damage;
	return (*this);
}

void	ClapTrap::attack(std::string const& target)
{
	std::cout << "ClapTrap " << Name << " attack " << target << ", causing " << Attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << Name << " took " << amount << " amount of damage" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << Name << " took " << amount << " amount of damage" << "" << std::endl;
}