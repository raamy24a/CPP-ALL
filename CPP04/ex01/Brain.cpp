/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 04:20:34 by radib             #+#    #+#             */
/*   Updated: 2026/02/23 15:37:57 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor called" << std::endl;
}
Brain::~Brain()
{
    std::cout << "Default Brain destructor called" << std::endl;
}
Brain::Brain(const Brain& copy)
{
	*this = copy;
}

std::string Brain::getIdeas(int index) const
{
	if (index < 0 || index >= 100)
	{
		std::cout << "please chose a number between 0 and 99" << std::endl;
		return ("");
	}
	else
		return (this->ideas[index]);
}
void Brain::setIdea(std::string idea, int index)
{
	ideas[index] = idea;
}
Brain& Brain::operator=(const Brain &other)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = other.ideas[i];
	}
	return (*this);
}
