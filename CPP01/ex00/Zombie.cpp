/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:02:56 by radib             #+#    #+#             */
/*   Updated: 2026/03/25 17:40:55 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void)
{
	std::cout << name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(const std::string& n) : name(n)
{
	std::cout << "Zombie constructor called" << std::endl;
}

Zombie::Zombie() : name("Default")
{
	std::cout << "Default Zombie constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destructor called : " << this->name << std::endl;
}