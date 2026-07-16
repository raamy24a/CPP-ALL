/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 11:00:02 by radib             #+#    #+#             */
/*   Updated: 2026/07/15 13:46:59 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(25, 5, "PresidentialPardonForm") , _target(target)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw(FormNotSigned());
	executor.executeForm(*this);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}
