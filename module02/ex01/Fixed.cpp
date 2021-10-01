/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:12:17 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/01 11:33:42 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int fixed)
{
	std::cout << "Int constructor called" << std::endl;
	_fixed = fixed << bits;
}

Fixed::Fixed(const float fixed)
{
	std::cout << "Float constructor called" << std::endl;
	_fixed = roundf(fixed * (1 << bits));
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator= (const Fixed& copy)
{
	std::cout << "Assignation operator called" << std::endl;
	_fixed = copy.getRawBits();
	return *this;
}

int		Fixed::getRawBits() const
{
	return (_fixed);
}

void	Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}

int		Fixed::toInt( void ) const
{
	return (_fixed >> bits);
}

float	Fixed::toFloat( void ) const
{
	float	tmp = (float)_fixed;
	return (tmp / (1 << bits));
}

std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}