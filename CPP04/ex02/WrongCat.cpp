/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:20:02 by radib             #+#    #+#             */
/*   Updated: 2026/02/23 22:38:28 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Default WrongCat constructor called" << std::endl;
    type = "wrongCat";
}
WrongCat::~WrongCat()
{
    std::cout << "Default WrongCat destructor called" << std::endl;
}
WrongCat::WrongCat(const WrongCat& copy)
{
}
WrongCat& WrongCat::operator=(const WrongCat& other)
{
	return *this;
}
void WrongCat::makeSound() const
{
	std::cout << "MOWWW" << std::endl;
}
const std::string WrongCat::getType() const
{
	return (this->type);
}
