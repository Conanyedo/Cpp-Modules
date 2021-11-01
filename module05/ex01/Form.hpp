/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:12:31 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/27 13:34:07 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		const int			_grade_sign;
		const int			_grade_execute;
		bool				_signed;
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
		Form();
		Form(const std::string& name, const int gradeSign, const int gradeExecute);
		Form(const Form& copy);
		Form& operator = (const Form& copy);
		~Form();
		std::string	getName() const;
		int			getGradeSign() const;
		int			getGradeExecute() const;
		bool		getSigned() const;
		void		beSigned(const Bureaucrat& brt);
};

std::ostream& operator << (std::ostream& out, const Form& brt);

#endif