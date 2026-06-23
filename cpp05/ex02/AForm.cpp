/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:56:24 by radib             #+#    #+#             */
/*   Updated: 2026/06/23 18:35:47 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(int gradeToExec, int gradeToSign, std::string name) :_name(name), _signed(false), _gradeToSign(gradeToSign),_gradeToExec(gradeToExec) 
{
    std::cout << "Default AForm constructor called" << std::endl;
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
AForm::~AForm()
{
    std::cout << "Default AForm destructor called" << std::endl;
}
AForm::AForm(const AForm& other) :_name(other._name), _signed(other._signed), _gradeToSign(other._gradeToSign),_gradeToExec(other._gradeToExec) 
{
    _signed = other._signed;
}
AForm& AForm::operator=(const AForm& other)
{
    this->_signed = other._signed;
    return (*this);
}
std::string 	AForm::getName() const
{
    return (_name);
}
bool			AForm::getSigned() const
{
    return (_signed);
}
int		AForm::getGradeToSign() const
{
    return (_gradeToSign);
}
int		AForm::getGradeToExec() const
{
    return (_gradeToExec);
}
char const *AForm::FormNotSigned::what(void) const throw()
{
	return "Form is not signed";
}

char const *AForm::GradeTooHighException::what(void) const throw()
{
	return "Grade is too high, try a value between 1 and 150";
}
char const *AForm::GradeTooLowException::what(void) const throw()
{
	return "Grade is too low, try a value between 1 and 150";
}
std::ostream& operator<<(std::ostream& o, AForm& current)
{
    o << "AForm " << current.getName() << ", grade required to sign : " << current.getGradeToSign() << ", grade required to exec : " << current.getGradeToExec();
    if (current.getSigned())
        o << " is currently signed" << std::endl;
    else
	{
        o << " is currently not signed" << std::endl;
	}
	return (o);
}

void AForm::beSigned(const Bureaucrat& bureaucrat)
{
    if (this->getGradeToSign() <= bureaucrat.getGrade())
	{
		std::cout << bureaucrat.getName() << "couldn't sign " << this->getName() << " because grade is too low." << std::endl;
		throw (AForm::GradeTooLowException());
	}
	std::cout << bureaucrat.getName() << "signed " << this->getName() << std::endl;
    this->_signed = true;
}