/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:49:18 by radib             #+#    #+#             */
/*   Updated: 2026/08/14 02:02:20 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main(void)
{
    MutantStack<int> bonjour;
    bonjour.push(1);
    bonjour.push(2);
    bonjour.push(3);
    bonjour.push(4);
    bonjour.push(5);
    return (0);
}