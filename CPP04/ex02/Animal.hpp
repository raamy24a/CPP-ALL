/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:53:29 by radib             #+#    #+#             */
/*   Updated: 2026/02/24 01:01:30 by radib            ###   ########.fr       */
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
    virtual void makeSound() const;
	virtual Animal& operator=(const Animal& other) = 0;
protected:
	std::string type;
};

#endif