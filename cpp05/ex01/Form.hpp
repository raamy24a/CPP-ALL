/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:56:15 by radib             #+#    #+#             */
/*   Updated: 2026/10/29 11:49:17 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Bureaucrat;
class Form
{
    public :
		Form(int gradeToExec, int gradeToSign, std::string name);
		~Form();
		Form(const Form& other);
		Form& operator=(const Form& other);
		std::string 	getName() const;
		bool			getSigned() const;
		void 			beSigned(const Bureaucrat& bureaucrat);
		int		getGradeToSign() const;
		int		getGradeToExec() const;
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