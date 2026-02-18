/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 10:07:23 by radib             #+#    #+#             */
/*   Updated: 2026/02/18 11:23:20 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap gabin = ClapTrap("Gabin");
	ClapTrap colin = ClapTrap("Colin");
	
	gabin.attack("Colin");
	colin.takeDamage(0);
}