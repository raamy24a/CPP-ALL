/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 15:09:47 by radib             #+#    #+#             */
/*   Updated: 2026/02/23 15:15:35 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat& copy);
	Cat& operator=(const Cat& other);
    ~Cat();
    void makeSound() const;
    const std::string getType() const;
	Brain& getBrain();
private:
	std::string type;
	Brain* brain;
};

#endif
