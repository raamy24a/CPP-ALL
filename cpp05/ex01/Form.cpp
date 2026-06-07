/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:56:24 by radib             #+#    #+#             */
/*   Updated: 2026/06/07 14:05:55 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(int gradeToExec, int gradeToSign, std::string name) : _gradeToExec(gradeToExec), _gradeToSign(gradeToSign), _name(name)
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
Form::Form(const Form& other) : _gradeToExec(other._gradeToExec), _gradeToSign(other._gradeToSign), _name(other._name)
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
const int		Form::getGradeToSign() const
{
    return (_gradeToSign);
}
const int		Form::getGradeToExec() const
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
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
    if (this->getGradeToSign() <= bureaucrat.getGrade())
		throw (Form::GradeTooLowException());
    this->_signed = true;
}