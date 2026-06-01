/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:07:17 by radib             #+#    #+#             */
/*   Updated: 2026/02/19 14:05:59 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->ad = 0;
	this->hp = 10;
	this->name = name;
	this->energy = 10;
}
ClapTrap::ClapTrap()
{
	std::cout << "Default ClapTrap constructor called" << std::endl;
	this->ad = 0;
	this->hp = 10;
	this->name = "Bob";
	this->energy = 10;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Default ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energy > 0 && this->hp > 0)
	{
		std::cout  << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->ad << " points of damage!" << std::endl;
	}
	if (this->hp < 0)
		std::cout << this->name << " is dead so he can't attack" << std::endl;
	else if (this->energy < 0)
		std::cout << this->name << " has no energy so he can't attack" << std::endl;
		
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hp > 0)
	{
		this->hp -= amount;
		std::cout << this->name << " loses " << amount << " health points!" << std::endl;
	}
	else
		std::cout <<"He is already dead leave him be" << std::endl;
}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy > 0 && this->hp > 0)
	{
		std::cout << this->name << " repairs itself for " << amount << " health points!" << std::endl;
		this->hp += amount;
	}
	if (this->hp < 0)
		std::cout << this->name << " is dead so he can't be repaired" << std::endl;
	else if (this->energy < 0)
		std::cout << this->name << " has no energy so he can't be repaired" << std::endl;
}