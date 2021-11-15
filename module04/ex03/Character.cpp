/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:05:15 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/15 13:58:35 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : Name(""), index(0)
{
	// std::cout << "Character default constructor has been called!!" << std::endl;
	int i = -1;
	while (++i < 4)
		this->Inventory[i] = NULL;
}

Character::Character(const std::string& name) : Name(name), index(0)
{
	// std::cout << "Character constructor has been called!!" << std::endl;
	int i = -1;
	while (++i < 4)
		this->Inventory[i] = NULL;
}

Character::Character(const Character& copy)
{
	// std::cout << "Character copy constructor has been called!!" << std::endl;
	int i = -1;
	while (++i < copy.index)
		this->Inventory[i] = NULL;
	*this = copy;
}

Character&	Character::operator=(const Character& copy)
{
	// std::cout << "Character Assignation operator has been called!!" << std::endl;
	if (this != &copy)
	{
		int i = -1;
		this->Name = copy.getName();
		this->index = copy.index;
		while (++i < index)
		{
			delete this->Inventory[i];
			this->Inventory[i] = copy.Inventory[i]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (Name);
}

void	Character::equip(AMateria* m)
{
	if (this->index < 4)
	{
		this->Inventory[this->index] = m;
		this->index++;
	}
	else
		std::cout << "The Inventory is full!!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < this->index)
	{
		int		i = idx;
		while (i < (this->index - 1))
		{
			this->Inventory[i] = this->Inventory[i + 1];
			i++;
		}
		this->Inventory[i] =  NULL;
		this->index--;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < this->index)
		this->Inventory[idx]->use(target);
}

Character::~Character()
{
	// std::cout << "Character destructor has been called!!" << std::endl;
}
