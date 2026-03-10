/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:18:03 by radib             #+#    #+#             */
/*   Updated: 2026/03/10 22:08:31 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon weapon) {
	std::cout << "HumanB constructor called" << std::endl;
	this->name = name;
	this->weapon = &weapon;
}

HumanB::HumanB(std::string name) {
	std::cout << "HumanB constructor called" << std::endl;
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB()
{
	std::cout << "Default HumanB destructor called" << std::endl;
}

void HumanB::attack()
{
	if (this->weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " attacks with their bare hands" << std::endl;
}
void HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}