/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/20 11:00:02 by radib             #+#    #+#             */
/*   Updated: 2026/07/15 14:01:48 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(145, 137, "ShrubberyCreationForm") , _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}
void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getSigned())
		throw(FormNotSigned());
	executor.executeForm(*this);
	std::ofstream o((_target + "_shrubbery").c_str());
	o << "       _-_" << std::endl << "    /~~   ~~\\" << std::endl << " /~~         ~~\\" << std::endl << "{               }" << std::endl <<
" \\   _-     -_  /" << std::endl <<
"   ~  \\   /  ~" << std::endl <<
"_- -   | | _- _" << std::endl <<
"  _ -  | |   -_" << std::endl <<
"      /  \\" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}
