/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:25:02 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/28 11:21:36 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomizing", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : 
	Form("Robotomizing", 72, 45) , _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy) : 
	Form("Robotomizing", 72, 45)
{
	*this = copy;	
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
	if (this != &copy)
	{
		this->_target = copy._target;
	}
	return (*this);
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (_target);
}

void		RobotomyRequestForm::Action() const
{
	int		random;

	srand (time(NULL));
	random = rand() % 2;
	std::cout << "* DRILLING NOISES *\n" << std::endl;
	if (random)
		std::cout << _target << " has been robotomized successfully\n";
	else
		std::cout << _target << " failed to get robotomized!!\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}