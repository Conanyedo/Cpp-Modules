/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 17:56:06 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/08 15:13:42 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat constructor has been called!!" << std::endl;
}

Cat::Cat(const Cat& copy)
{
	std::cout << "Cat copy constructor has been called!!" << std::endl;
	*this = copy;
}

Cat& Cat::operator= (const Cat& copy)
{
	std::cout << "Cat Assignation operator has been called!!" << std::endl;
	if (this != &copy)
		type = copy.getType();
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meooow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor has been called!!" << std::endl;
}
