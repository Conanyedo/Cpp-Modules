/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/01 15:11:50 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/04 16:01:14 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(int hitpoint, int attackdmg);
		FragTrap(const FragTrap& copy);
		FragTrap& operator = (const FragTrap& copy);
		~FragTrap();
		void	attack(std::string const& target);
		void	highFivesGuys(void);
};

#endif