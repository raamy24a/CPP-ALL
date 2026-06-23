/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:56:15 by radib             #+#    #+#             */
/*   Updated: 2026/06/23 18:31:36 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
// #include "Bureaucrat.hpp"
class Bureaucrat;

class AForm
{
    public :
		AForm(int gradeToSign, int gradeToExec, std::string name);
		virtual ~AForm();
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		std::string 	getName() const;
		bool			getSigned() const;
		int				getGradeToSign() const;
		void 			beSigned(const Bureaucrat& bureaucrat);
		int				getGradeToExec() const;
		virtual void 	execute(Bureaucrat const &executor) const = 0;
    protected :
	    const std::string   _name;
	    bool                _signed;
	    const int           _gradeToSign;
	    const int           _gradeToExec;

	    class GradeTooHighException : public std::exception {
			public:
				virtual char const	*what(void) const throw();
		};
		class FormNotSigned : public std::exception {
			public:
				virtual char const	*what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual char const	*what(void) const throw();
		};
} ;

std::ostream& operator<<(std::ostream& o, AForm& current);
