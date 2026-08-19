/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:49:18 by radib             #+#    #+#             */
/*   Updated: 2026/08/19 06:05:09 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
    
    if (argc != 2)
        std::cerr << "wrong ammount of args try to just input a csv file" << std::endl;
    if (argv[1])
    {
        BitcoinExchange afff(argv[1]);
        afff.executeBitcoin();
    }
    return (0);
}

