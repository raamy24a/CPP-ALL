/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 02:11:08 by radib             #+#    #+#             */
/*   Updated: 2026/02/12 02:17:37 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
        std::cout << "wrong number of args" << std::endl;
    std::ifstream in(argv[1]);
}