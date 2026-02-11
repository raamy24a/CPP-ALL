/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:18:07 by radib             #+#    #+#             */
/*   Updated: 2026/02/12 00:21:36 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanB
{
public:
	HumanB(std::string name);
	HumanB(std::string name, Weapon weapon);
	void setWeapon(Weapon &weapon);
	~HumanB();
	void attack();
private:
	std::string name;
	Weapon* weapon;
};
