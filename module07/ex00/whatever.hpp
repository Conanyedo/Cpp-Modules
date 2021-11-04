/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 12:32:45 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/02 10:41:56 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void	swap(T& x , T& y);

template <typename T>
T	min(T min, T max);

template <typename T>
T	max(T min, T max);

class Awesome
{
	private:
		int _n;
	public:
		Awesome(void) : _n(0) {}
		Awesome(int n) : _n(n) {}
		Awesome &operator=(Awesome &a)
		{
			_n = a._n;
			return *this;
		}
		bool	operator==(Awesome const& rhs) const
		{
			return (this->_n == rhs._n);	
		}
		bool	operator!=(Awesome const& rhs) const
		{
			return (this->_n != rhs._n);	
		}
		bool	operator>(Awesome const& rhs) const
		{
			return (this->_n > rhs._n);	
		}
		bool	operator<(Awesome const& rhs) const
		{
			return (this->_n < rhs._n);	
		}
		bool	operator>=(Awesome const& rhs) const
		{
			return (this->_n >= rhs._n);	
		}
		bool	operator<=(Awesome const& rhs) const
		{
			return (this->_n <= rhs._n);	
		}
		int	get_n() const
		{
			return (_n);
		}
};

std::ostream& operator<<(std::ostream& o, const Awesome& a)
{
	o << a.get_n();
	return o;
}

/*
Hey, if we are bringing up clans again shouldn't we initialize all clans' scores to 0 and remove the 4.2% bonus experience from the first clan???That would make the competitive game fair for everyone, especially for the new students!!
yeah its like it stopped for a while and they want to bringing it again with the new promo but it seems unfair to me to have a boost of xp over your peers while you just entered the school yesterday!!
*/
#endif