/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:41:36 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/08 20:11:06 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span()
{
	this->_N = 0;
	this->_stored = 0;
}

Span::Span(unsigned int n) : _N(n), _stored(0)
{
	vect.reserve(n);
}

const char*		Span::fullObjectException::what() const throw()
{
	return ("Object is full!!");
}

const char*		Span::noSpan::what() const throw()
{
	return ("There is no span!!");
}

void	Span::addNumber(int n)
{
	if (this->_stored == this->_N)
		throw fullObjectException();
	vect.push_back(n);
	this->_stored++;
}

int		Span::shortestSpan()
{
	int				span;

	if (this->_stored <= 1)
		throw noSpan();
	std::sort(vect.begin(), vect.end());
	span = *(vect.begin()) - *(vect.begin() + 1);
	span = (span < 0) ? -span : span;
	return (span);
}

int		Span::longestSpan()
{
	int				span;

	if (this->_stored <= 1)
		throw noSpan();
	std::sort(vect.begin(), vect.end());
	span = *(vect.end() - 1) - *(vect.begin());
	span = (span < 0) ? -span : span;
	return (span);
}

Span::~Span()
{	
}