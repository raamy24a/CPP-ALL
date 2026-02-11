/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 14:18:16 by radib             #+#    #+#             */
/*   Updated: 2026/02/12 00:19:20 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string& getType();
	void setType(std::string type);
private:
	std::string type;
};
#endif