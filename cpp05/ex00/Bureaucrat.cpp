/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:24:39 by radib             #+#    #+#             */
/*   Updated: 2026/06/02 11:49:08 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	try
	{
		if (grade <= 0)
			throw(GradeTooHighException());
		else if (grade >= 151)
			throw(GradeTooLowException());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	_grade = grade;
	
}
Bureaucrat::~Bureaucrat(){
	
}
char const *Bureaucrat::GradeTooHighException::what(void) const throw(){
	return "Grade is too high, try a value between 1 and 150";
}
char const *Bureaucrat::GradeTooLowException::what(void) const throw(){
	return "Grade is too low, try a value between 1 and 150";
}