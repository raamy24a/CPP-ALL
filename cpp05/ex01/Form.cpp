/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:56:24 by radib             #+#    #+#             */
/*   Updated: 2026/10/29 11:50:57 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(int gradeToExec, int gradeToSign, std::string name) : _name(name), _gradeToSign(gradeToSign),_gradeToExec(gradeToExec)
{
    std::cout << "Default Form constructor called" << std::endl;
	if (_gradeToExec <= 0)
		throw(GradeTooHighException());
	else if (_gradeToExec >= 151)
		throw(GradeTooLowException());
	if (_gradeToSign <= 0)
		throw(GradeTooHighException());
	else if (_gradeToSign >= 151)
		throw(GradeTooLowException());
    _signed = false;
}
Form::~Form()
{
    std::cout << "Default Form destructor called" << std::endl;
}
Form::Form(const Form& other) : _name(other._name), _gradeToSign(other._gradeToSign),_gradeToExec(other._gradeToExec)
{
    _signed = other._signed;
}
Form& Form::operator=(const Form& other)
{
    this->_signed = other._signed;
    return (*this);
}
std::string 	Form::getName() const
{
    return (_name);
}
bool			Form::getSigned() const
{
    return (_signed);
}
int		Form::getGradeToSign() const
{
    return (_gradeToSign);
}
int		Form::getGradeToExec() const
{
    return (_gradeToExec);
}

char const *Form::GradeTooHighException::what(void) const throw()
{
	return "Grade is too high, try a value between 1 and 150";
}
char const *Form::GradeTooLowException::what(void) const throw()
{
	return "Grade is too low, try a value between 1 and 150";
}
std::ostream& operator<<(std::ostream& o, Form& current)
{
    o << "Form " << current.getName() << ", grade required to sign : " << current.getGradeToSign() << ", grade required to exec : " << current.getGradeToExec();
    if (current.getSigned())
        o << " is currently signed" << std::endl;
    else
        o << " is currently not signed" << std::endl;
    return o;
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (this->getGradeToSign() <= bureaucrat.getGrade())
	{
		std::cout << bureaucrat.getName() << "couldn't sign " << this->getName() << " because grade is too low." << std::endl;
		throw (Form::GradeTooLowException());
	}
	std::cout << bureaucrat.getName() << "signed " << this->getName() << std::endl;
    this->_signed = true;
}