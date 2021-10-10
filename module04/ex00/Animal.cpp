/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:56:03 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/08 15:39:31 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal default constructor has been called!!" << std::endl;
}

Animal::Animal(const std::string& type) : type(type)
{
	std::cout << "Animal constructor has been called!!" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor has been called!!" << std::endl;
	*this = copy;
}

Animal& Animal::operator= (const Animal& copy)
{
	std::cout << "Animal Assignation operator has been called!!" << std::endl;
	if (this != &copy)
		type = copy.getType();
	return (*this);
}

const std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor has been called!!" << std::endl;
}
