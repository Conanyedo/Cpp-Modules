/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 11:08:23 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/08 19:33:52 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// Cat a;
	// std::cout << "---------\n";
	// Cat b(a);
	// std::cout << "---------\n";
	// Cat	c;
	// std::cout << "---------\n";

	// c = a;
	// std::cout << "---------\n";
	
	{
		//testing deep coping
		Cat cat;
		Cat copycat(cat);
		cat.print_ideas(0);
		copycat.print_ideas(0);
		cat.set_ideas("im a cat person!!", 0);
		cat.print_ideas(0);
		copycat.print_ideas(0);
	}
	
	std::cout << "--------------------------------\n";
	
	// Animal test();
	int c = 2;
	Animal *animal[c];
	int a = -1;

	while (++a < c)
	{
		if (a % 2)
			animal[a] = new Cat();
		else
			animal[a] = new Dog();
	}
	while (a--)
		delete animal[a];
		
	std::cout << "--------------------------------\n";
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
}