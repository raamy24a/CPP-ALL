/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:09:48 by radib             #+#    #+#             */
/*   Updated: 2026/02/22 02:25:04 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Default Cat constructor called" << std::endl;
    this->type = "Cat";
}
Cat::~Cat()
{
    std::cout << "Default Cat destructor called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "MIAOUUUUUUUUU MIAOUUUUUUUUUUUUUUUUUUUUU" << std::endl;
}

const std::string Cat::getType() const
{
	return (this->type);
}
