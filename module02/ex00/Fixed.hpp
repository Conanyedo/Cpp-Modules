/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:11:20 by ybouddou          #+#    #+#             */
/*   Updated: 2021/09/30 11:50:50 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
	private:
		int		_fixed;
		static const int	bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed& copy);
		Fixed& operator = (const Fixed& copy);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif