/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:09:27 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/11 12:03:05 by ybouddou         ###   ########.fr       */
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
	if (this != &copy)
	{
		delete this->brain;
		this->brain = new Brain();
		type = copy.getType();
		*this->brain = *copy.brain;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}

void	Dog::set_ideas(std::string idea, int i)
{
	brain->set_ideas(idea, i);
}

void	Dog::print_ideas(int i)
{
	std::cout << brain->get_ideas(i) << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor has been called!!" << std::endl;
}
