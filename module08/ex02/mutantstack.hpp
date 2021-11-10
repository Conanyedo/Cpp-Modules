/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:09:23 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/10 14:28:01 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>
#include <deque>
#include <vector>

template <typename T, class Container>
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename std::stack<T, Container>::container_type::iterator	iterator;
		typedef typename std::stack<T, Container>::container_type::const_iterator	const_iterator;
		typedef typename std::stack<T, Container>::container_type::reverse_iterator	reverse_iterator;
		typedef typename std::stack<T, Container>::container_type::const_reverse_iterator	const_reverse_iterator;
		
		MutantStack(){}
		MutantStack(const MutantStack& cpy)
		{
			*this = cpy;
		}
		MutantStack& operator=(const MutantStack& cpy)
		{
			if (this != &cpy)
				std::stack<T, Container>::operator=(cpy);
			return *this;
		}
		~MutantStack(){}
		iterator	begin()
		{
			return (this->c.begin());
		}
		iterator	end()
		{
			return (this->c.end());
		}
		
		const_iterator	cbegin()
		{
			return (this->c.cbegin());
		}
		const_iterator	cend()
		{
			return (this->c.cend());
		}
		
		reverse_iterator	rbegin()
		{
			return (this->c.rbegin());
		}
		reverse_iterator	rend()
		{
			return (this->c.rend());
		}
		
		const_reverse_iterator	crbegin()
		{
			return (this->c.crbegin());
		}
		const_reverse_iterator	crend()
		{
			return (this->c.crend());
		}
};

#endif