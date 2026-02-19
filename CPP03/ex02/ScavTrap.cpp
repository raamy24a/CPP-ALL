/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 12:55:18 by radib             #+#    #+#             */
/*   Updated: 2026/02/19 14:06:17 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ScavTrap.hpp"

void ScavTrap::attack(const std::string &target)
{
	if (this->energy > 0 && this->hp > 0)
	{
		std::cout  << "ScavTrap " << this->name << " initiates combat protocol against " << target << ", inflicting  " << this->ad << " units of structural damage!" << std::endl;
	}
	if (this->hp < 0)
		std::cout << this->name << " is in permanent shutdown mode. Combat denied." << std::endl;
	else if (this->energy < 0)
		std::cout << this->name << " battery reserves depleted. Attack sequence aborted." << std::endl;
		
}

ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "Scavtrap default constructor called" << std::endl;
	this->ad = 20;
	this->hp = 100;
	this->name = name;
	this->energy = 50;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Scavtrap constructor called" << std::endl;
	this->ad = 20;
	this->hp = 100;
	this->name = name;
	this->energy = 50;
}
void ScavTrap::guardGate()
{
	std::cout << this->name << "ENTERING GATE KEEPER MODE BOOP BOOP" << std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "Default Scavtrap destructor called" << std::endl;
}

#endif