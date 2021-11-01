/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 16:09:01 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/25 12:56:35 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCRATIONFORM_HPP
# define SHRUBBERYCRATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string		_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator =(const ShrubberyCreationForm& copy);
		~ShrubberyCreationForm();
		std::string	getTarget() const;
		void			Action() const;
};

#endif