/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:37:42 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/28 14:03:35 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Form.hpp"

class Form;

class Intern
{
	public:
		class FormNameNotfoundException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		Intern();
		Intern(const Intern& copy);
		Intern& operator = (const Intern& copy);
		~Intern();
		Form	*makeForm(std::string name, std::string target);
};

std::ostream& operator << (std::ostream& out, const Intern& intern);

#endif
