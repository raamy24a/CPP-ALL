/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:52:53 by radib             #+#    #+#             */
/*   Updated: 2026/02/19 13:31:21 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :  FragTrap(), ScavTrap()
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "Default DiamondTrap destructor called" << std::endl;
}