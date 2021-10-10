/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:55:11 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/08 15:13:26 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor has been called!!" << std::endl;
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog copy constructor has been called!!" << std::endl;
	*this = copy;
}

Dog& Dog::operator= (const Dog& copy)
{
	std::cout << "Dog Assignation operator has been called!!" << std::endl;
	if (this != &copy)
		type = copy.getType();
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor has been called!!" << std::endl;
}
