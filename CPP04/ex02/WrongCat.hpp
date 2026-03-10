/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/20 12:20:14 by radib             #+#    #+#             */
/*   Updated: 2026/02/24 01:16:34 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class WrongCat : public Animal
{
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat& copy);
    WrongCat& operator=(const WrongCat& other);
    void makeSound() const;
    const std::string getType() const;
private:
	std::string type;
};
