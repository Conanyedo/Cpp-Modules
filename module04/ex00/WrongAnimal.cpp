/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:02:42 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/08 15:39:19 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal default constructor has been called!!" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& type) : type(type)
{
	std::cout << "WrongAnimal constructor has been called!!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal copy constructor has been called!!" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal& copy)
{
	std::cout << "WrongAnimal Assignation operator has been called!!" << std::endl;
	if (this != &copy)
		type = copy.getType();
	return (*this);
}

const std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor has been called!!" << std::endl;
}
