/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:02:56 by radib             #+#    #+#             */
/*   Updated: 2026/02/11 13:32:36 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce( void)
{
	std::cout << name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
void Zombie::setter(std::string name)
{
	this->name = name;
}


Zombie::Zombie(std::string name) {
	std::cout << "Zombie constructor called" << std::endl;
	this->name = name;		
}

Zombie::Zombie() {
	std::cout << "Default Zombie constructor called" << std::endl;
	this->name = "Default";		
}

Zombie::~Zombie()
{
	std::cout << "Default Zombie destructor called" << std::endl;
}