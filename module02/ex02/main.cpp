/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 11:10:50 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/12 11:48:27 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//5.05
//101.00001100110011001101
// << 8
//10100001100.110011001101
//1292.8
//1293

//2
//10
// << 8
//1000000000
//512

//662016
//10100001101000000000
// >> 8
//101000011010.00000000
//2586

//1805
//111.00001101
//7.05078125

int		main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const c( Fixed( 5.05f ) / Fixed( 2 ) );
	
	std::cout << b << " = " << (5.05f * 2) << std::endl;
	std::cout << c << " = " << (5.05f / 2) << std::endl;
	
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}
