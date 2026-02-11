/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:18:00 by radib             #+#    #+#             */
/*   Updated: 2026/02/12 00:34:42 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

class HumanA
{
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();
	void attack();
private:
	std::string name;
	Weapon &weapon;
};