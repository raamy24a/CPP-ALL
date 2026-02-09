/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:49:27 by radib             #+#    #+#             */
/*   Updated: 2026/02/09 15:08:02 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

static bool input(std::string &destination, std::string label)
{
	std::cout << label;
	std::getline(std::cin, destination);
	if (std::cin.eof())
		return (false);
	return (!destination.empty());
}

void Contact::add()
{
	
	while (!input(first_name, "first name:\n"))
		;
	while (!input(last_name, "last name:\n"))
		;
	while (!input(nickname, "nickname:\n"))
		;
	while (!input(phone_number, "phone number:\n"))
		;
	while (!input(darkest_secret, "darkest secret:\n"))
		;
}
std::string Contact::getter_first_name(){return (first_name);}
std::string Contact::getter_last_name(){return (last_name);}
std::string Contact::getter_nickname(){return (nickname);}
std::string Contact::getter_phone_number(){return (phone_number);}
std::string Contact::getter_darkest_secret(){return (darkest_secret);}