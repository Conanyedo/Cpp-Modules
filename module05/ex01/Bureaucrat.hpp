/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:40:21 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/27 13:33:55 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int                 _grade;
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		Bureaucrat();
		Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator = (const Bureaucrat& copy);
		~Bureaucrat();
		std::string	getName() const;
		int			getGrade() const;
		void		increment();
		void		decrement();
		void		signForm(Form& f);
};

std::ostream& operator << (std::ostream& out, const Bureaucrat& brt);

#endif
