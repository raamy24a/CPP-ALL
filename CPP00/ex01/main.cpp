/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:55:01 by radib             #+#    #+#             */
/*   Updated: 2026/02/14 21:22:26 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"


int main(void)
{
	int a = 5;
	{
		int a = 2;
		std::cout << a << std::endl;
	}
	std::cout << a << std::endl;
	PhoneBook 	my_phone_book;

	my_phone_book.main_loop();
}