/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:02:40 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/07 18:05:59 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WORNGANIMAL_HPP
# define WORNGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string	type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& copy);
		WrongAnimal& operator = (const WrongAnimal& copy);
		WrongAnimal(const std::string& type);
		~WrongAnimal();
		void	makeSound() const;
		const std::string	getType() const;
};

#endif