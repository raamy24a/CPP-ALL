/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:09:45 by radib             #+#    #+#             */
/*   Updated: 2026/02/23 15:48:34 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Default Dog constructor called" << std::endl;
    type = "Dog";
    this->brain = new Brain();
}
Dog::~Dog()
{
    std::cout << "Default Dog destructor called" << std::endl;
	delete this->brain;
}
Dog::Dog(const Dog& copy)
{
	this->brain = new Brain(*copy.brain);
}
Dog& Dog::operator=(const Dog& other)
{
	delete this->brain;
	this->brain = new Brain(*other.brain);
	return *this;
}
void Dog::makeSound() const
{
    std::cout << "BARK BARK BARK rrrrrrrrrrrr" << std::endl;
}
const std::string Dog::getType() const
{
	return this->type;
}
Brain& Dog::getBrain()
{
	return *brain;
}
