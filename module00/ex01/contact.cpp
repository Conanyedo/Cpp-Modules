/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 17:24:42 by ybouddou          #+#    #+#             */
/*   Updated: 2021/06/28 11:54:20 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void	contact::print_contact(contact *contact, int i)
{
	std::string	index;
	int			j;

	std::cout << BLU << "Choose an index: " << reset;
	if (!getline(std::cin, index))
		exit (0);
	if (index.length() != 1)
	{
		std::cout << RED << "Invalid index!!" << reset << std::endl;
		return ;
	}
	j = -1;
	while (++j <= i)
	{
		if (j == stoi(index))
		{
			std::cout << GRN << "first name: " << reset << contact[j].fname << std::endl;
			std::cout << GRN << "last name: " << reset << contact[j].lname << std::endl;
			std::cout << GRN << "login: " << reset << contact[j].login << std::endl;
			std::cout << GRN << "nickname: " << reset << contact[j].nickname << std::endl;
			std::cout << GRN << "postal address: " << reset << contact[j].posta_address << std::endl;
			std::cout << GRN << "email address: " << reset << contact[j].email << std::endl;
			std::cout << GRN << "phone number: " << reset << contact[j].phone_num << std::endl;
			std::cout << GRN << "birthday: " << reset << contact[j].birthday << std::endl;
			std::cout << GRN << "favorite meal: " << reset << contact[j].fav_meal << std::endl;
			std::cout << GRN << "underwear color: " << reset << contact[j].underwear_color << std::endl;
			std::cout << GRN << "darkest secret: " << reset << contact[j].darkest_secret << std::endl;
			std::cout << reset;
			return ;
		}
	}
	std::cout << RED << "invalid index!!" << reset << std::endl;
}

void	contact::search_contact(contact *contact, int i)
{
	int		j;

	j = -1;
	std::cout << GRN << "---------------------------------------------" << std::endl;
	std::cout << "|" << BLU << "     index"<< GRN << "|";
	std::cout << BLU << "first name" << GRN << "|" << BLU << " last name" << GRN << "|";
	std::cout << BLU << "  nickname" << GRN << "|" << std::endl;
	std::cout << GRN << "---------------------------------------------" << std::endl;
	while (++j <= i)
	{
		std::cout << GRN << "|         " << reset;
		std::cout << j;
		std::cout << GRN << "|" << reset;
		print_fields(contact[j].fname);
		print_fields(contact[j].lname);
		print_fields(contact[j].nickname);
		std::cout << std::endl;
	}
	std::cout << GRN << "---------------------------------------------" << reset << std::endl;
	contact[i].print_contact(contact, i);
}

void	contact::add_contact()
{
	get_info("Enter your first name: ", &fname);
	get_info("Enter your last name: ", &lname);
	get_info("Enter your nickname: ", &nickname);
	get_info("Enter your login: ", &login);
	get_info("Enter your postal address: ", &posta_address);
	get_info("Enter your email address: ", &email);
	get_info("Enter phone number: ", &phone_num);
	get_info("Enter your birthday: ", &birthday);
	get_info("Enter your favorite meal: ", &fav_meal);
	get_info("Enter your underwear color: ", &underwear_color);
	get_info("Enter your darkest secret: ", &darkest_secret);
}
