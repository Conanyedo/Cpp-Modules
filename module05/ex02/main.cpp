/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:39:47 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/28 11:05:20 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main()
{
	try
	{
		ShrubberyCreationForm	shrubbery("Home");
		std::cout << "--------- shrubbery -----------\n" << std::endl;
		shrubbery.Action();

		std::cout << "\n--------- Roboto -----------\n" << std::endl;
		RobotomyRequestForm		robot("Roboto-san");
		robot.Action();

		std::cout << "\n--------- president -----------\n" << std::endl;
		PresidentialPardonForm		president("Younes");
		president.Action();


		std::cout << "\n--------- execute -----------\n" << std::endl;
		Bureaucrat	bureaucrat("Director", 6);
		bureaucrat.signForm(president);
		bureaucrat.executeForm(president);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}