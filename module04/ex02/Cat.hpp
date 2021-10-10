/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:09:29 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/08 16:32:34 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain	*brain;
	public:
		Cat();
		Cat(std::string idea);
		Cat(const Cat& copy);
		Cat& operator = (const Cat& copy);
		~Cat();
		virtual void	makeSound() const;
		void	set_ideas(std::string idea, int i);
		void	print_ideas(int i);
};

#endif