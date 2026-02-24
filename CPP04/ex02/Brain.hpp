/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 14:53:29 by radib             #+#    #+#             */
/*   Updated: 2026/02/22 04:14:18 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include "Animal.hpp"

class Brain
{
public:
	Brain();
	~Brain();
	Brain(const Brain& copy);
	std::string getIdeas(int index) const;
	void setIdea(std::string idea, int index);
	Brain &operator=(const Brain &other);

private:
	std::string ideas[100];
};

#endif