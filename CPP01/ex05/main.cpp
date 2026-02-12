/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 02:11:08 by radib             #+#    #+#             */
/*   Updated: 2026/02/12 21:28:40 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( void)
{
    Harl Gabin;
    Gabin = Harl();
    Gabin.complain("DEBUG");
    Gabin.complain("INFO");
    Gabin.complain("WARNING");
    Gabin.complain("ERROR");
    Gabin.complain("wqefweqfweqf");
}