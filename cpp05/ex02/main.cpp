/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:49:18 by radib             #+#    #+#             */
/*   Updated: 2026/07/15 14:05:04 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
 
int main()
{
	try
	{
		Bureaucrat kevin("kevin", 50);
		PresidentialPardonForm president("president");
		ShrubberyCreationForm shrubbbery("shruberry");
		RobotomyRequestForm robot("Robot");
		president.beSigned(kevin);
		shrubbbery.beSigned(kevin);
		robot.beSigned(kevin);
		president.execute(kevin);
		shrubbbery.execute(kevin);
		robot.execute(kevin);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return(0);
}