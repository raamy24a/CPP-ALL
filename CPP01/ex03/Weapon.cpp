/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:18:12 by radib             #+#    #+#             */
/*   Updated: 2026/02/11 15:56:29 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType()
{
	return type;
}
void Weapon::setType(std::string type)
{
	this->type = type; 
}

Weapon::Weapon(std::string type) {
	std::cout << "Weapon constructor called" << std::endl;
	this->type = type;
}

Weapon::Weapon() {
	std::cout << "Default Weapon constructor called" << std::endl;
	this->type = "Default";
}

Weapon::~Weapon()
{
	std::cout << "Default Weapon destructor called" << std::endl;
}
