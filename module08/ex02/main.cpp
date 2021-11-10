/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 09:09:20 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/10 14:37:52 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	MutantStack<int, std::deque<int> > mstack_deque;
	MutantStack<int, std::vector <int> > mstack_vector;
	int		i;

	i = -1;
	while (++i < 5)
	{
		mstack_deque.push(i);
		mstack_vector.push(i);
		if (i == 2)
		{
			mstack_deque.pop();
			// mstack_vector.pop();
		}
	}
	std::cout << "Top element of stack using deque container: " << mstack_deque.top() << std::endl;
	std::cout << "Top element of stack using vector container: " << mstack_vector.top() << std::endl;
	std::cout << "size of deque: " << mstack_deque.size() << std::endl;
	std::cout << "size of vector: " << mstack_vector.size() << std::endl;
	
	std::cout << "------ printing mstack_deque -----------\n";
	MutantStack<int, std::deque<int> >::iterator it_deque = mstack_deque.begin();
	--it_deque;
	while (++it_deque != mstack_deque.end())
		std::cout << *it_deque << std::endl;
	std::cout << "\n------ printing mstack_vector -----------\n";
	MutantStack<int, std::vector<int> >::iterator it_vector = mstack_vector.begin();
	--it_vector;
	while (++it_vector != mstack_vector.end())
		std::cout << *it_vector << std::endl;
		
	std::cout << "\n------ printing mstack_deque copy -----------\n";
	std::stack<int, std::deque<int> > s(mstack_deque);
	s.push(5);
	std::cout << s.top() << std::endl;
	
	std::cout << "\n------ printing mstack_vector copy-----------\n";
	MutantStack<int, std::vector <int> > cpy_stack_vect(mstack_vector);
	MutantStack<int, std::vector<int> >::iterator it_vector_cp = cpy_stack_vect.begin();
	--it_vector_cp;
	while (++it_vector_cp != cpy_stack_vect.end())
		std::cout << *it_vector_cp << std::endl;
	
	std::cout << "\n------ printing reverse mstack_vector-----------\n";
	MutantStack<int, std::vector<int> >::reverse_iterator rev_it_vector = mstack_vector.rbegin();
	--rev_it_vector;
	while (++rev_it_vector != mstack_vector.rend())
		std::cout << *rev_it_vector << std::endl;
	return 0;
}
