/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouddou <ybouddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:12:35 by ybouddou          #+#    #+#             */
/*   Updated: 2021/10/28 11:35:19 by ybouddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("form"), _grade_sign(0), _grade_execute(0), _signed(0)
{
	std::cout << this->getName();
	throw GradeTooHighException();
}

Form::Form(const std::string& name, const int gradeSign, const int gradeExecute) : 
	_name(name), _grade_sign(gradeSign), _grade_execute(gradeExecute), _signed(0)
{
	if (_grade_sign < 1 || _grade_execute < 1 || _grade_sign > 150 || _grade_execute > 150)
		std::cout << this->getName();
	if (_grade_sign < 1 || _grade_execute < 1)
		throw GradeTooHighException();
	else if (_grade_sign > 150 || _grade_execute > 150)
		throw GradeTooLowException();
}

Form::Form(const Form& copy) :
	_name(copy._name), _grade_sign(copy._grade_sign), _grade_execute(copy._grade_execute)
{
	*this = copy;
}

Form&	Form::operator= (const Form& copy)
{
	if (this != &copy)
		_signed = copy.getSigned();
	return (*this);
}

const char*		Form::GradeTooHighException::what() const throw()
{
	return ("'s grade is too high!!!");
}

const char*		Form::GradeTooLowException::what() const throw()
{
	return ("'s grade is too low!!!");
}

const char*		Form::FormUnsignedException::what() const throw()
{
	return ("'s not signed!!!");
}

std::string	Form::getName() const
{
	return (this->_name);
}

int			Form::getGradeSign() const
{
	return (this->_grade_sign);
}

int			Form::getGradeExecute() const
{
	return (this->_grade_execute);
}

bool		Form::getSigned() const
{
	return (this->_signed);
}

void		Form::beSigned(const Bureaucrat& brt)
{
	if (brt.getGrade() <= getGradeSign())
		_signed = 1;
	else
	{
		std::cout << this->getName();
		throw GradeTooHighException();
	}
}


void		Form::execute(Bureaucrat const& executor) const
{
	if (!getSigned())
		throw FormUnsignedException();
	else if (this->_grade_execute < executor.getGrade())
		throw GradeTooHighException();
	this->Action();
}

Form::~Form()
{
}

std::ostream& operator << (std::ostream& out, const Form& f)
{
	out << f.getName() << " form requires " << f.getGradeSign() << " grade to sign and " 
	 << f.getGradeExecute() << " grade to execute. The actual form state is ";
	(f.getSigned() ? out << "Signed\n" : out << "UnSigned\n");
	return out;
}