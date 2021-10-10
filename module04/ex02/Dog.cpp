/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:09:27 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/08 16:12:16 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog constructor has been called!!" << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog copy constructor has been called!!" << std::endl;
	this->brain = nullptr;
	*this = copy;
}

Dog& Dog::operator= (const Dog& copy)
{
	std::cout << "Dog Assignation operator has been called!!" << std::endl;
	delete this->brain;
	this->brain = new Brain();
	if (this != &copy)
	{
		type = copy.getType();
		*this->brain = *copy.brain;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor has been called!!" << std::endl;
}
