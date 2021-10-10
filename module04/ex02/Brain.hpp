/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:09:19 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/08 16:29:57 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain& copy);
		Brain& operator = (const Brain& copy);
		void	set_ideas(std::string idea, int i);
		const std::string&	get_ideas(int i) const;
		~Brain();
};

#endif