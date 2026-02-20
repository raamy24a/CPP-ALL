/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:20:14 by radib             #+#    #+#             */
/*   Updated: 2026/02/20 14:49:47 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class WrongCat : public Animal
{
public:
    WrongCat();
    ~WrongCat();
    void makeSound();
private:
	std::string type;
};
