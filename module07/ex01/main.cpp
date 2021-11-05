/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:32:42 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/05 15:12:58 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void	print(const T& element)
{
	std::cout << element << " ";
}

template <typename T>
void	iter(T *arr, int length, void (*func)(const T& element))
{
	int		i;

	i = -1;
	while (++i < length)
		func(arr[i]);
}

int		main()
{
	int		arr[] = {5, 9, 7, 8, 1, 2};
	char	str[] = {'y', 'o', 'u', 'n', 'e', 's'};
	Awesome	tab[5];
	
	iter<int>(arr, 6, print);
	std::cout << "\n";
	iter<char>(str, 6, print);
	std::cout << "\n";
	iter<Awesome>(tab, 5, print);
	std::cout << "\n";
	
	return (0);
}