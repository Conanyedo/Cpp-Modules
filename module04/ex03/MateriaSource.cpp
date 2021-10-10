/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:06:36 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/10 18:11:07 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : index(0)
{
	// std::cout << "MateriaSource default constructor has been called!!" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	// std::cout << "MateriaSource copy constructor has been called!!" << std::endl;
	*this = copy;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& copy)
{
	// std::cout << "MateriaSource Assignation operator has been called!!" << std::endl;
	if (this != &copy)
	{
		int i = -1;
		this->index = copy.index;
		while (++i < index)
			this->Inventory[i] = copy.Inventory[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (this->index < 4)
	{
		this->Inventory[this->index] = m;
		this->index++;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	int		i = -1;

	while (++i < 4)
	{
		if (this->Inventory[i]->getType() == type)
			return (this->Inventory[i]->clone());
	}
	return (0);
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource destructor has been called!!" << std::endl;
}
