/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 11:00:02 by radib             #+#    #+#             */
/*   Updated: 2026/07/15 14:04:03 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(72, 45, "RobotomyRequestForm") , _target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	srand(time(0));
	if (!this->getSigned())
		throw(FormNotSigned());
	executor.executeForm(*this);
	// std::cout << rand() << std::endl;
	if (rand() % 2)
	{
		std::cout << "BRRRRRRRRRRRRRRRRRRRRRRRRRR this " << this->_target << " has been robotomized" << std::endl;
	}
	else
	{
		std::cout << "BRRRRRRRRRRRRRRRRRRRRRRRRRR robotomy failed" << std::endl;
	}
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}
