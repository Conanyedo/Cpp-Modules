/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 19:38:17 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/10 16:31:05 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	// std::cout << "AMateria default constructor has been called!!" << std::endl;
}

AMateria::AMateria(std::string const & type) : type(type)
{
	// std::cout << "AMateria constructor has been called!!" << std::endl;
}

AMateria::AMateria(const AMateria& copy)
{
	// std::cout << "AMateria copy constructor has been called!!" << std::endl;
	*this = copy;
}

AMateria&	AMateria::operator=(const AMateria& copy)
{
	// std::cout << "AMateria Assignation operator has been called!!" << std::endl;
	if (this != &copy)
		type = copy.getType();
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* shoots a Materia bolt at " << target.getName() << " *\n";
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor has been called!!" << std::endl;
}
