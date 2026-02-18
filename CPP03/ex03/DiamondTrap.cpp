/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 14:52:53 by radib             #+#    #+#             */
/*   Updated: 2026/02/18 15:13:50 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap() , ScavTrap() , FragTrap() 
{
	std::cout << "Default DiamondTrap constructor called" << std::endl;
}
DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name) , FragTrap(name) 
{
	std::cout << "DiamondTrap constructor called" << std::endl;
}
DiamondTrap::~DiamondTrap()
{
	std::cout << "Default DiamondTrap destructor called" << std::endl;
}