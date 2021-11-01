/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:23:54 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/28 11:00:07 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <stdlib.h>
#include <time.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string		_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm& copy);
		RobotomyRequestForm& operator =(const RobotomyRequestForm& copy);
		~RobotomyRequestForm();
		std::string	getTarget() const;
		void			Action() const;
};

#endif