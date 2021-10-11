/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:09:22 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/11 12:24:20 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <stdlib.h>

Brain::Brain()
{
	std::string	randIdeas[4] = {"One piece is the best manga ever!!", "Messi is GOAT!!", "Whatever!!!", "Some 4AM ideas"};
	int	i = 0;
	time_t t1;
	
	srand ( (unsigned) time (&t1));
	std::cout << "Brain constructor has been called!!" << std::endl;
	while (i < 100)
	{
		ideas[i] = randIdeas[rand() % 4];
		i++;
	}
}

Brain::Brain(const Brain& copy)
{
	std::cout << "Brain copy constructor has been called!!" << std::endl;
	*this = copy;
}

Brain& Brain::operator= (const Brain& copy)
{
	int		i = 0;
	
	std::cout << "Brain Assignation operator has been called!!" << std::endl;
	if (this != &copy)
	{
		while (i < 100)
		{
			this->ideas[i] = copy.ideas[i];
			i++;
		}
	}
	return (*this);
}

void	Brain::set_ideas(std::string idea, int i)
{
	if (i < 100)
		ideas[i] = idea;
}

const std::string&	Brain::get_ideas(int i) const
{
	return (ideas[i]);
}

Brain::~Brain()
{
	std::cout << "Brain destructor has been called!!" << std::endl;
}