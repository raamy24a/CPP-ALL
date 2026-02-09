/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:55:01 by radib             #+#    #+#             */
/*   Updated: 2026/02/09 03:21:07 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

bool input(std::string &destination, std::string label)
{
	std::cout << label;
	std::getline(std::cin, destination);
	if (std::cin.eof())
		return (false);
	return !destination.empty();
}
Optional add()
{
	Optional new_contact;
	new_contact.has_value = false;

	if (!input(new_contact.val.first_name, "first name:\n"))
		return new_contact;
	if (!input(new_contact.val.last_name, "last name:\n"))
		return new_contact;
	if (!input(new_contact.val.nickname, "nickname:\n"))
		return new_contact;
	if (!input(new_contact.val.phone_number, "phone number:\n"))
		return new_contact;
	if (!input(new_contact.val.darkest_secret, "darkest secret:\n"))
		return new_contact;
	new_contact.has_value = true;
	return new_contact;
}
void search(PhoneBook my_phone_book)
{
	int i = 0;
	while (i < 8)
	{
		std::cout << std::setw(10) << i;
		std::cout << "|";
		if (my_phone_book.contact_list[i].first_name.length() > 10)
			std::cout << my_phone_book.contact_list[i].first_name.substr(0, 9) << '.';
		else
			std::cout << std::setw(10) << my_phone_book.contact_list[i].first_name.substr(0, 10);
		std::cout << "|";
		if (my_phone_book.contact_list[i].last_name.length() > 10)
			std::cout << my_phone_book.contact_list[i].last_name.substr(0, 9) << '.';
		else
			std::cout << std::setw(10) << my_phone_book.contact_list[i].last_name.substr(0, 10);
		std::cout << "|";
		if (my_phone_book.contact_list[i].nickname.length() > 10)
			std::cout << my_phone_book.contact_list[i].nickname.substr(0, 9) << '.' << std::endl;
		else
			std::cout << std::setw(10) << my_phone_book.contact_list[i].nickname.substr(0, 10) << std::endl;;
		i++;
	}
}

int main(void)
{
	std::string temp;
	PhoneBook 	my_phone_book;
	Optional	temporary;
	int			index;

	while (!std::cin.eof())
	{
		input(temp, "Choose between : ADD, SEARCH, EXIT\n");
		if (temp != "ADD" && temp != "SEARCH" && temp != "EXIT" && !std::cin.eof())
			std::cout << "Wrong argument" << std::endl;
		else if (temp == "ADD")
		{
			temporary = add();
			if (temporary.has_value)
			{
				my_phone_book.contact_list[index % 8] = temporary.val;
				index++;
			}
		}
		else if (temp == "SEARCH")
			search(my_phone_book);
		else if (temp == "EXIT")
			return (0);
	}
}