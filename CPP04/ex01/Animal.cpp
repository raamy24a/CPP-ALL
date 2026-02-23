/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:53:20 by radib             #+#    #+#             */
/*   Updated: 2026/02/23 15:38:46 by radib            ###   ########.fr       */
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
Animal::Animal(const Animal& copy)
{
	*this = copy;
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
Animal& Animal::operator=(const Animal& other)
{
	this->type = other.type;
	return *this;
}