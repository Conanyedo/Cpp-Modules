/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:15:54 by ybouddou          #+#    #+#             */
/*   Updated: 2021/09/26 11:44:38 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int		main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string& stringREF = str;

	std::cout << "Memory address by str: " << &str << std::endl;
	std::cout << "Memory address by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address by stringREF: " << &stringREF << std::endl;
	std::cout << "String using pointer: " << *stringPTR << std::endl;
	std::cout << "String using reference: " << stringREF << std::endl;
}