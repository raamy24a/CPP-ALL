/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 08:13:27 by radib             #+#    #+#             */
/*   Updated: 2026/04/01 10:30:39 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character() : std::string name {
	std::cout << "Character constructor called" << std::endl;
}

Character() : std::Character& other {
	std::cout << "Character constructor called" << std::endl;
}

~Character() {
	std::cout << "Character destructor called" << std::endl;
}

Character::equip(AMateria* m) {
	int i = 0;

	while (i < 4 && _inventory[i] != NULL)
	{
		i++;
	}
	if (i == 4)
		delete(m);
	else
	{
		_inventory[i] = m;
	}
}

Character::unequip(int idx) {
	if (_inventory[idx] == NULL)
		return ;
	else
	{
		int i = 0;
		while (_floor[i] != NULL)
			i++;
		_floor[i] = _inventory[idx];
		_inventory[idx] = NULL;
	}
}

Character::use(int idx, ICharacter& target) {
	if (idx < 0)
	{
		std::cerr << "index too small, try something between 0 and 3" << std::endl;
	}

	if (idx >= 4)
	{
		std::cerr << "index too big, try something between 0 and 3" << std::endl;
	}
	
	if (_inventory[idx] == NULL)
		return ;
	else
	{
		std::cout << _inventory[idx].get_type() << ""
	}
}