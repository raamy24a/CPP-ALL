/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:56:15 by radib             #+#    #+#             */
/*   Updated: 2026/06/05 17:50:21 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Form
{
    public :
		Form(int gradeToExec, int gradeToSign, std::string name);
		~Form();
		Form(const Form& other);
		Form& operator=(const Form& other);
		std::string 	getName();
		bool			getSigned();
		const int		getGradeToSign();
		void			beSigned();
		const int		getGradeToExec();
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