/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:07:23 by radib             #+#    #+#             */
/*   Updated: 2026/02/18 14:26:52 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap gabin = ClapTrap("Clap Gabin");
	FragTrap colin = FragTrap("Scav Colin");
	
	gabin.attack("Colin");
	colin.takeDamage(0);
}