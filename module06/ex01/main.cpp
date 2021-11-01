/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 16:42:22 by ybouddou          #+#    #+#             */
/*   Updated: 2021/11/01 11:17:05 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <stdint.h>

struct	Data
{
	int		i;
	std::string	str;
};

uintptr_t	serialize(Data* ptr)
{
	uintptr_t	data_ptr;

	data_ptr = reinterpret_cast<uintptr_t>(ptr);
	std::cout << ptr << " | " << data_ptr << std::endl;
	return (data_ptr);
}

Data*		deserialize(uintptr_t raw)
{
	Data	*data_ptr;

	data_ptr = reinterpret_cast<Data*>(raw);
	return (data_ptr);
}

int		main()
{
	Data	*data = new Data;
	uintptr_t	ptr;

	data->i = 5;
	data->str = "younes";
	
	std::cout << data->i << " | " << data->str << std::endl;
	ptr = serialize(data);
	std::cout << ptr << " | " << &ptr << std::endl;

	data = deserialize(ptr);
	std::cout << data << " | " << data->i << " | " << data->str << std::endl;
	return (0);
}