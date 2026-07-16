/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:24:39 by radib             #+#    #+#             */
/*   Updated: 2026/06/23 18:45:31 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
    std::cout << "Default Bureaucrat constructor called" << std::endl;
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
void	Bureaucrat::executeForm(AForm const &form) const
{
	if (this->getGrade() > form.getGradeToExec())
		throw(GradeTooLowException());
	std::cout << this->_name << " executed " << form.getName() << std::endl;
}
std::string Bureaucrat::getName() const
{
	return (_name);
}
int Bureaucrat::getGrade() const
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