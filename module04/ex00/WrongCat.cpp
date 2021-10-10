/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:01:59 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/08 15:14:22 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat constructor has been called!!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& copy)
{
	std::cout << "WrongCat copy constructor has been called!!" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator= (const WrongCat& copy)
{
	std::cout << "WrongCat Assignation operator has been called!!" << std::endl;
	if (this != &copy)
		type = copy.getType();
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meooow" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor has been called!!" << std::endl;
}