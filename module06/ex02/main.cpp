/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 11:39:28 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/01 12:23:56 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.hpp"

Base*	generate(void)
{
	Base*	base;
	int		random;

	srand (time(NULL));
	random = rand() % 3;
	switch (random)
	{
		case 0:
			base = new A;
			break;
		case 1:
			base = new B;
			break;
		case 2:
			base = new C;
			break;
	}
	return (base);
}

void	identify(Base* p)
{
	A *a;
	B *b;
	C *c;
	
	a = dynamic_cast<A*>(p);
	b = dynamic_cast<B*>(p);
	c = dynamic_cast<C*>(p);
	if (a)
		std::cout << "A\n";
	else if (b)
		std::cout << "B\n";
	else if (c)
		std::cout << "C\n";
}

void	identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A\n";
		(void)a;
		return ;
	}
	catch (const std::exception& e){}
	try
	{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B\n";
		(void)b;
		return ;
	}
	catch (const std::exception& e){}
	try
	{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C\n";
		(void)c;
		return ;
	}
	catch (const std::exception& e){}
}

int		main()
{
	Base*	base;
	base = generate();

	std::cout << "Identify real type using pointers!!\n";
	identify(base);
	std::cout << "Identify real type using reference!!\n";
	identify(*base);
	
	return (0);
}