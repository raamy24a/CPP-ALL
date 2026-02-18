/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:07:23 by radib             #+#    #+#             */
/*   Updated: 2026/02/18 14:01:23 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClapTrap gabin = ClapTrap("Clap Gabin");
	ScavTrap colin = ScavTrap("Scav Colin");
	
	gabin.attack("Colin");
	colin.takeDamage(0);
}