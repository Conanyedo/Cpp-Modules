/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 12:48:42 by ybouddou          #+#    #+#             */
/*   Updated: 2021/09/24 11:16:35 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	print_fields(std::string field)
{
	int		c;

	if (field.length() <= 10)
	{
		std::cout << std::setw(10);
		std::cout << field;
		std::cout << GRN << "|" << reset;
	}
	else
	{
		c = -1;
		while (++c < 9)
			std::cout << field[c];
		std::cout << ".";
		std::cout << GRN << "|" << reset;
	}
}

void	get_info(std::string msg, std::string *field)
{
	std::cout << GRN << msg << reset;
	if (!getline(std::cin, *field))
		exit (0);
}

int	main()
{
	std::string	input;
	contact		contact[8];
	int			i;

	i = -1;
	while (1)
	{
		std::cout << RED << "-----------------------" << reset << std::endl;
		std::cout << RED << "|" << GRN << "     My Phonebook    " << RED << "|" << reset << std::endl;
		std::cout << RED << "-----------------------" << reset << std::endl;
		std::cout << RED << "|" << GRN << " ADD " << RED << "|" << GRN << " SEARCH " << RED << "|" << GRN << " EXIT " << RED << "|" << reset << std::endl;
		std::cout << RED << "-----------------------" << reset << std::endl;
		std::cout << BLU << "Enter a command: " << reset;
		if (!getline(std::cin, input))
			exit (0);
		if (input == "EXIT")
			exit (0);
		else if (input == "ADD")
		{
			if (i == 7)
				std::cout << RED << "No space to add a new contact!!" << reset << std::endl;
			else
			{
				i++;
				contact[i].add_contact();
			}
		}
		else if (input == "SEARCH")
			contact[i].search_contact(contact, i);
	}
	return (0);
}
