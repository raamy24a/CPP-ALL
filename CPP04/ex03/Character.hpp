/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 08:08:49 by radib             #+#    #+#             */
/*   Updated: 2026/04/01 09:44:29 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

class Character : public ICharacter {
private:
    std::string _name;
    AMateria*   _inventory[4];
    AMateria*   _floor[10000];

public:
    Character(std::string name);
    Character(const Character& other);
    Character& operator=(const Character& other);
    ~Character();

    std::string const& getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};