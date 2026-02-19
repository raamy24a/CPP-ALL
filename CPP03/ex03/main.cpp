/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:07:23 by radib             #+#    #+#             */
/*   Updated: 2026/02/19 14:01:40 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap gabin = DiamondTrap("Diamond Gabin");
	FragTrap colin = FragTrap("Scav Colin");
	
	gabin.attack("Colin");
	colin.takeDamage(0);
}