/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:49:18 by radib             #+#    #+#             */
/*   Updated: 2026/07/15 15:27:35 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
 
int main()
{
	try
	{
		Bureaucrat trump("trump", 1);
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf != NULL)
		{
			rrf->beSigned(trump);
			rrf->execute(trump);
		}
		rrf = someRandomIntern.makeForm("robotomy ", "Bender");
		if (rrf != NULL)
		{
			rrf->beSigned(trump);
			rrf->execute(trump);
		}
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		if (rrf != NULL)
		{
			rrf->beSigned(trump);
			rrf->execute(trump);
		}
		delete rrf;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(0);
}