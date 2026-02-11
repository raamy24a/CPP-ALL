/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:18:03 by radib             #+#    #+#             */
/*   Updated: 2026/02/11 15:53:56 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name, Weapon weapon) {
	std::cout << "HumanB constructor called" << std::endl;
	this->name = name;
	this->weapon = weapon;
}

HumanB::HumanB(std::string name) {
	std::cout << "HumanB constructor called" << std::endl;
	this->name = name;
}

HumanB::~HumanB()
{
	std::cout << "Default HumanB destructor called" << std::endl;
}

void HumanB::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}