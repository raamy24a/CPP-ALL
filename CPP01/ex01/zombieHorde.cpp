/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 12:56:16 by radib             #+#    #+#             */
/*   Updated: 2026/03/25 17:36:25 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *ptr = new Zombie[N];

	// while (N > 0)
	// {
		// N--;
		// ptr[N].setter(name);
	// }
	
	for (int i = 0; i < N; i++)
		ptr[i].setter(name);
	return (ptr);
}