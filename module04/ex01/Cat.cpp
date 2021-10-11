/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:09:31 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/11 11:41:32 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor has been called!!" << std::endl;
	brain = new Brain();
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Cat copy constructor has been called!!" << std::endl;
	this->brain = nullptr;
	*this = copy;
}

Cat& Cat::operator= (const Cat& copy)
{
	std::cout << "Cat Assignation operator has been called!!" << std::endl;
	if (this != &copy)
	{
		delete this->brain;
		this->brain = new Brain();
		type = copy.getType();
		*(this->brain) = *(copy.brain);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meooow" << std::endl;
}

void	Cat::set_ideas(std::string idea, int i)
{
	brain->set_ideas(idea, i);
}

void	Cat::print_ideas(int i)
{
	std::cout << brain->get_ideas(i) << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor has been called!!" << std::endl;
}