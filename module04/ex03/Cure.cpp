/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:56:25 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/10 18:11:15 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure default constructor has been called!!" << std::endl;
}

Cure::Cure(const Cure& copy)
{
	// std::cout << "Cure copy constructor has been called!!" << std::endl;
	*this = copy;
}

Cure&	Cure::operator=(const Cure& copy)
{
	// std::cout << "Cure Assignation operator has been called!!" << std::endl;
	if (this != &copy)
		type = copy.getType();
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *cure = new Cure();
	return (cure);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure::~Cure()
{
	// std::cout << "Cure destructor has been called!!" << std::endl;
}