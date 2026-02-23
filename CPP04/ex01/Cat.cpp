/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:09:48 by radib             #+#    #+#             */
/*   Updated: 2026/02/23 15:48:54 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Brain.hpp"

Cat::Cat()
{
    std::cout << "Default Cat constructor called" << std::endl;
    this->type = "Cat";
	this->brain = new Brain();
}
Cat::~Cat()
{
    std::cout << "Default Cat destructor called" << std::endl;
	delete this->brain;
}
Cat::Cat(const Cat& copy)
{
	this->brain = new Brain(*copy.brain);
}
Cat& Cat::operator=(const Cat& other)
{
	delete this->brain;
	this->brain = new Brain(*other.brain);
	return *this;
}
void Cat::makeSound() const
{
    std::cout << "MIAOUUUUUUUUU MIAOUUUUUUUUUUUUUUUUUUUUU" << std::endl;
}

const std::string Cat::getType() const
{
	return (this->type);
}

Brain& Cat::getBrain()
{
	return *brain;
}
