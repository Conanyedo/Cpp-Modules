/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/21 12:48:49 by ybouddou          #+#    #+#             */
/*   Updated: 2021/06/28 11:47:32 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define BLU "\e[0;34m"
#define reset "\e[0m"

class	contact
{
	private:
		std::string	fname;
		std::string	lname;
		std::string	nickname;
		std::string	login;
		std::string	posta_address;
		std::string	email;
		std::string	phone_num;
		std::string	birthday;
		std::string	fav_meal;
		std::string	underwear_color;
		std::string	darkest_secret;

	public:
		void	add_contact();
		void	search_contact(contact *contact, int i);
		void	print_contact(contact *contact, int i);
};

void	print_fields(std::string field);
void	get_info(std::string msg, std::string *field);

#endif