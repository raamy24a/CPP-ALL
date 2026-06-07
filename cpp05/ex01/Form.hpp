/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:56:15 by radib             #+#    #+#             */
/*   Updated: 2026/06/07 14:20:23 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
    public :
		Form(int gradeToExec, int gradeToSign, std::string name);
		~Form();
		Form(const Form& other);
		Form& operator=(const Form& other);
		std::string 	getName() const;
		bool			getSigned() const;
		const int		getGradeToSign() const;
		void 			beSigned(const Bureaucrat& bureaucrat);
		const int		getGradeToExec() const;
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

std::ostream& operator<<(std::ostream& o, Form& current);
#endif