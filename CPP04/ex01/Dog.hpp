/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:09:50 by radib             #+#    #+#             */
/*   Updated: 2026/02/23 23:19:15 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog& copy);
    Dog& operator=(const Dog& other);
    ~Dog();
    void makeSound() const;
    const std::string getType() const;
	Brain& getBrain();
private:
	std::string type;
	Brain* brain;
};
#endif
