/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 14:43:57 by radib             #+#    #+#             */
/*   Updated: 2026/05/28 14:52:19 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default Animal constructor called" << std::endl;
    type = "Animal";
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "Default Animal destructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	*this = copy;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	this->type = other.type;
	return *this;
}
void WrongAnimal::makeSound() const
{
    std::cout<< "???uhhh???" << std::endl;
}
const std::string WrongAnimal::getType() const
{
    std::cout << ">" << this->type << "<" << std::endl;
	return (this->type);
}
