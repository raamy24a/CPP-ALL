/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 12:49:27 by radib             #+#    #+#             */
/*   Updated: 2026/02/14 21:28:01 by radib            ###   ########.fr       */
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
static bool input_phone_number(std::string &destination, std::string label)
{
	std::cout << label;
	int a;
	std::getline(std::cin, destination);
	if (std::cin.eof())
		return (false);
	try
	{
		a = atoi(destination.c_str());
	}
	catch (std::exception &e)
	{
		std::cout << "error : " << e.what() << std::endl;
		return (false);
	}
	if (a == 0)
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
	while (!input_phone_number(phone_number, "phone number:\n"))
		;
	while (!input(darkest_secret, "darkest secret:\n"))
		;
}
std::string Contact::getter_first_name() { return (first_name); }
std::string Contact::getter_last_name() { return (last_name); }
std::string Contact::getter_nickname() { return (nickname); }
std::string Contact::getter_phone_number() { return (phone_number); }
std::string Contact::getter_darkest_secret() { return (darkest_secret); }