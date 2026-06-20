/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:56:15 by radib             #+#    #+#             */
/*   Updated: 2026/06/20 10:44:34 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
    public :
		AForm(int gradeToExec, int gradeToSign, std::string name);
		virtual ~AForm();
		AForm(const AForm& other);
		AForm& operator=(const AForm& other);
		std::string 	getName() const;
		bool			getSigned() const;
		const int		getGradeToSign() const;
		void 			beSigned(const Bureaucrat& bureaucrat);
		const int		getGradeToExec() const;
		virtual void 	execute(Bureaucrat const &executor) const = 0;
		void			executeForm(AForm const &form);
    private :
	    const std::string   _name;
	    bool                _signed;
	    const int           _gradeToSign;
	    const int           _gradeToExec;
	    class GradeTooHighException : public std::exception {
			public:
				virtual char const	*what(void) const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual char const	*what(void) const throw();
		};
} ;

std::ostream& operator<<(std::ostream& o, AForm& current);
#endif
#pragma once
