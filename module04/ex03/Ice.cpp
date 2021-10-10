/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 11:55:36 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/10 18:11:18 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice default constructor has been called!!" << std::endl;
}

Ice::Ice(const Ice& copy)
{
	// std::cout << "Ice copy constructor has been called!!" << std::endl;
	*this = copy;
}

Ice&	Ice::operator=(const Ice& copy)
{
	// std::cout << "Ice Assignation operator has been called!!" << std::endl;
	if (this != &copy)
		type = copy.getType();
	return (*this);
}

AMateria* Ice::clone() const
{
	AMateria *ice = new Ice();
	return (ice);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice()
{
	// std::cout << "Ice destructor has been called!!" << std::endl;
}
