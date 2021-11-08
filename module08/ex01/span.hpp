/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:41:29 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/08 18:03:28 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <string>
#include <exception>
#include <vector>

class Span
{
	private:
		unsigned int	_N;
		unsigned int	_stored;
		std::vector<int>	vect;
	public:
		class	fullObjectException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	noSpan : public std::exception
		{
			public:
				const char* what() const throw();
		};
		Span();
		Span(unsigned int n);
		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();
		~Span();
};

#endif