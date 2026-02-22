/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:53:20 by radib             #+#    #+#             */
/*   Updated: 2026/02/22 04:01:34 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Default Animal constructor called" << std::endl;
    type = "Animal";
}
Animal::~Animal()
{
    std::cout << "Default Animal destructor called" << std::endl;
}
void Animal::makeSound() const
{
    std::cout<< "???uhhh???" << std::endl;
}
const std::string Animal::getType() const
{
    std::cout << ">" << this->type << "<" << std::endl;
	return (this->type);
}