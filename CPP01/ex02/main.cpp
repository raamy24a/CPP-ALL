/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:01:57 by radib             #+#    #+#             */
/*   Updated: 2026/03/25 17:45:52 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

// void	doublestr(std::string& str) {
// 	str += str;
// 	std::cout << str << std::endl;
// }

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	// doublestr(brain);
	// std::cout << brain << std::endl;

	std::string *stringPTR = &brain;
	std::string &stringREF = brain;
	
	std::cout << &brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;
	
	std::cout << brain << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (0);
}