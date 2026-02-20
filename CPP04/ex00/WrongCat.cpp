/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:20:02 by radib             #+#    #+#             */
/*   Updated: 2026/02/20 14:50:40 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Default WrongCat constructor called" << std::endl;
}
WrongCat::~WrongCat()
{
    std::cout << "Default WrongCat destructor called" << std::endl;
}
void makeSound()
{
	std::cout << "MOWWW" << std::endl;
}