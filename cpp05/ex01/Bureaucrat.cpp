/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:24:39 by radib             #+#    #+#             */
/*   Updated: 2026/06/04 14:15:00 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    std::cout << "Default Bureaucrat destructor called" << std::endl;
	if (grade <= 0)
		throw(GradeTooHighException());
	else if (grade >= 151)
		throw(GradeTooLowException());
	_grade = grade;
}
Bureaucrat::~Bureaucrat()
{
    std::cout << "Default Bureaucrat destructor called" << std::endl;
}
char const *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Grade is too high, try a value between 1 and 150";
}
char const *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade is too low, try a value between 1 and 150";
}
std::string Bureaucrat::getName()
{
	return (_name);
}
int Bureaucrat::getGrade()
{
	return (_grade);
}
void Bureaucrat::increment()
{
	_grade--;
	if (_grade == 0)
		throw(GradeTooHighException());
}
void Bureaucrat::decrement()
{
	_grade++;
	if (_grade == 151)
		throw(GradeTooLowException());
}
std::ostream& operator<<(std::ostream& o, Bureaucrat& target)
{
	o << target.getName() << ", bureaucrat grade "<< target.getGrade() << std::endl;
	return (o);
}