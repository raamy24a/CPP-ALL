/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:17:57 by radib             #+#    #+#             */
/*   Updated: 2026/02/12 00:34:15 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon)
	: weapon(weapon)
{
	std::cout << "HumanA constructor called" << std::endl;
	this->name = name;
	
}

HumanA::~HumanA()
{
	std::cout << "Default HumanA destructor called" << std::endl;
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}