/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:49:18 by radib             #+#    #+#             */
/*   Updated: 2026/08/05 04:13:23 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> lol(10);
    lol[0] =  67;
    lol[1] =  1;
    lol[2] =  2;
    lol[3] =  3;
    lol[4] =  4;
    lol[5] =  5;
    lol[6] =  6;
    lol[7] =  7;
    lol[8] =  8;
    lol[9] =  9;
    int i = 0;
    while (i < 100)
    {
        int pos = easyfind(lol, i);
        std::cout << "pos: " << pos << "| number: " << i <<std::endl;
        i++;
    }
    return (0);
}