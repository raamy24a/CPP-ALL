/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:20:14 by radib             #+#    #+#             */
/*   Updated: 2026/02/22 02:17:11 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class WrongCat : public Animal
{
public:
    WrongCat();
    ~WrongCat();
    void makeSound() const;
    const std::string getType() const;
private:
	std::string type;
};
