/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:32:34 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/02 11:22:38 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void	print(const T& element);

template <typename T>
void	iter(T *arr, int length, void (*func)(const T& element));

class Awesome
{
	private:
		int	_n;
	public:
		Awesome(void) : _n(42) {return ;}
		int		get(void) const {return this->_n;}
};

std::ostream& operator<<(std::ostream& o, Awesome const& rhs)
{
	o << rhs.get();
	return o;
}


#endif