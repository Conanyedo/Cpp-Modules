/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:09:25 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/11 12:19:02 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain	*brain;
	public:
		Dog();
		Dog(const Dog& copy);
		Dog& operator = (const Dog& copy);
		virtual	~Dog();
		virtual void	makeSound() const;
		void	set_ideas(std::string idea, int i);
		void	print_ideas(int i);
};


#endif