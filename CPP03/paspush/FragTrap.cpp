/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:14:14 by radib             #+#    #+#             */
/*   Updated: 2026/02/19 13:22:27 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "Fragtrap default constructor called" << std::endl;
	this->ad = 30;
	this->hp = 100;
	this->name = name;
	this->energy = 100;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Fragtrap constructor called" << std::endl;
	this->ad = 30;
	this->hp = 100;
	this->name = name;
	this->energy = 100;
}
void FragTrap::highFivesGuys(void)
{
	std::cout << "Hello !!! let's high five guys" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "Fragtrap destructor called" << std::endl;
}