/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:49:18 by radib             #+#    #+#             */
/*   Updated: 2026/07/25 05:08:29 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void print(const int& x) {
    std::cout << x << std::endl;
}

void add(int &i)
{
    i += 1;
}

int main()
{
    const int lol[5] = {1, 2, 3, 4, 5};
    iter(lol, 5, print); // Matches the const iter template cleanly!
    int b[5] = {1, 2, 3, 4, 5};


    std::cout << "before :" << std::endl;
    iter(b, 5, print);

    iter(b, 5, add);
    std::cout << "after :" << std::endl;
    iter(b, 5, print);
}