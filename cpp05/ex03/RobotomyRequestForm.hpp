/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 12:22:29 by radib             #+#    #+#             */
/*   Updated: 2026/06/21 13:08:11 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "math.h"

class RobotomyRequestForm : public AForm {
private:
	const std::string	_target;
public:
	RobotomyRequestForm(std::string name);
	~RobotomyRequestForm();
	void 	execute(Bureaucrat const &executor) const;
};
