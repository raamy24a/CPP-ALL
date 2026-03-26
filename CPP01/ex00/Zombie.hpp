/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:02:59 by radib             #+#    #+#             */
/*   Updated: 2026/03/25 17:27:29 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie {
public:
	Zombie(void);
	Zombie(const std::string& n);
	~Zombie(void);
	
	void announce( void );
private:
	std::string name;
};

Zombie*	newZombie(const std::string& name );
void	randomChump(const std::string& name );

#endif