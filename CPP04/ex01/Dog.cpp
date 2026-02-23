/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:09:45 by radib             #+#    #+#             */
/*   Updated: 2026/02/23 02:31:52 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog()
{
    std::cout << "Default Dog constructor called" << std::endl;
    type = "Dog";
    new Dog();
}
Dog::~Dog()
{
    std::cout << "Default Dog destructor called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "BARK BARK BARK rrrrrrrrrrrr" << std::endl;
}
const std::string Dog::getType() const
{
	return (this->type);
}
