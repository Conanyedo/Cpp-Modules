/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 10:55:47 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/04 18:44:50 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"),
	FragTrap(0, 0), ScavTrap(0), Name(name)
{
	std::cout << "DiamondTrap Constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	std::cout << "DiamondTrap Copy Constrctor has been Called!!" << std::endl;
	*this = copy;
}

DiamondTrap&	DiamondTrap::operator= (const DiamondTrap& copy)
{
	std::cout << "DiamondTrap Assignation operator called!" << std::endl;
	this->Name = copy.Name;
	this->Hitpoints = copy.Hitpoints;
	this->Energy_points = copy.Energy_points;
	this->Attack_damage = copy.Attack_damage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor has been called!!" << std::endl;
}

void	DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name is " << Name << " , ClapTrap name is " << ClapTrap::Name << std::endl;
}