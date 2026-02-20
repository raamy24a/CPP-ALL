/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:09:45 by radib             #+#    #+#             */
/*   Updated: 2026/02/20 14:47:57 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Dog constructor called" << std::endl;
}
Dog::~Dog()
{
    std::cout << "Default Dog destructor called" << std::endl;
}
void Dog::makeSound()
{
    std::cout << "BARK BARK BARK rrrrrrrrrrrr" << std::endl;
}
