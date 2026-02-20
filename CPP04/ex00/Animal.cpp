/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:53:20 by radib             #+#    #+#             */
/*   Updated: 2026/02/20 14:52:06 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Animal constructor called" << std::endl;
}
Animal::~Animal()
{
    std::cout << "Default Animal destructor called" << std::endl;
}
void Animal::makeSound()
{
    std::cout << "???uhhh???" << std::endl;
}
std::string Animal::getType()
{
	return (this->type);
}