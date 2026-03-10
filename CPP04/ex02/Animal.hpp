/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:53:29 by radib             #+#    #+#             */
/*   Updated: 2026/02/24 14:56:37 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>

class Animal
{
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& copy);
	virtual const std::string getType() const;
    virtual void makeSound() const = 0;
	Animal& operator=(const Animal& other);
protected:
	std::string type;
};

#endif