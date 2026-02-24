/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:53:20 by radib             #+#    #+#             */
/*   Updated: 2026/02/24 01:00:35 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


void Animal::makeSound() const
{
    std::cout<< "???uhhh???" << std::endl;
}
const std::string Animal::getType() const
{
    std::cout << ">" << this->type << "<" << std::endl;
	return (this->type);
}
