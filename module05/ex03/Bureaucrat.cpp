/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 12:40:23 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/28 11:19:05 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bureaucrat"), _grade(0)
{
	std::cout << this->getName();
	throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	if (grade < 1 || grade > 150)
		std::cout << this->getName();
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name)
{
	*this = copy;
}

Bureaucrat&	Bureaucrat::operator= (const Bureaucrat& copy)
{
	if (this != &copy)
		_grade = copy.getGrade();
	return (*this);
}

const char*		Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("'s grade is too high!!!");
}

const char*		Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("'s grade is too low!!!");
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int			Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void		Bureaucrat::increment()
{
	this->_grade--;
	if (_grade < 1)
	{
		std::cout << this->getName();
		throw GradeTooHighException();
	}
}

void		Bureaucrat::decrement()
{
	this->_grade++;
	if (_grade > 150)
	{
		std::cout << this->getName();
		throw GradeTooLowException();
	}
}

void		Bureaucrat::signForm(Form& f)
{
	try
	{
		if (this->getGrade() > f.getGradeSign())
			throw GradeTooLowException();
		f.beSigned(*this);
		std::cout << this->getName() << " signs the " << f.getName() << " form" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " can't sign " << f.getName() << 
		" form because " << this->getName() << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const& form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executes " << form.getName() << " form\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << this->getName() << " failed to execute " << form.getName() << " form because " << form.getName() << e.what() << '\n';
	}
}

Bureaucrat::~Bureaucrat()
{
}

std::ostream& operator << (std::ostream& out, const Bureaucrat& brt)
{
	out << brt.getName() << ", bureaucrat grade " << brt.getGrade() << ".\n";
	return out;
}