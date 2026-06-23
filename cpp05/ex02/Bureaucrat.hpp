/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:24:41 by radib             #+#    #+#             */
/*   Updated: 2026/06/23 18:30:41 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "AForm.hpp"

class Bureaucrat
{
	public :
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& 	operator=(const Bureaucrat& other);
	std::string 	getName() const;
	int 			getGrade() const;
	void 			increment();
	void 			decrement();
	void 			signForm(AForm& form);
	void			executeForm(AForm const &form) const;
	private :
	const std::string 	_name;
	int 				_grade;
	class GradeTooHighException : public std::exception {
		public:
			virtual char const	*what(void) const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual char const	*what(void) const throw();
	};
} ;
std::ostream& operator<<(std::ostream& o, Bureaucrat& target);