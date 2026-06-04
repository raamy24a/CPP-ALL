/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 11:24:41 by radib             #+#    #+#             */
/*   Updated: 2026/06/04 14:12:48 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

class Bureaucrat
{
	public :
	~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	std::string getName();
	int getGrade();
	void increment();
	void decrement();
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