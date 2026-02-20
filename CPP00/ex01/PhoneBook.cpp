/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 14:37:28 by radib             #+#    #+#             */
/*   Updated: 2026/02/20 11:43:54 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

static bool input(std::string &destination, std::string label)
{
	std::cout << label;
	std::getline(std::cin, destination);
	if (std::cin.eof())
		return (false);
	return (!destination.empty());
}

void PhoneBook::main_loop() 
{
	std::string temp;
	int			index = 0;
	
	while (!std::cin.eof())
	{
		input(temp, "Choose between : ADD, SEARCH, EXIT\n");
		if (temp != "ADD" && temp != "SEARCH" && temp != "EXIT" && !std::cin.eof())
			std::cout << "Wrong argument" << std::endl;
		else if (temp == "ADD")
		{
			contact_list[index % 8].add();
			index++;
		}
		else if (temp == "SEARCH")
			search(index);
		else if (temp == "EXIT")
			return ;
	}
}

void PhoneBook::search(int index)
{
	int i = 0;
	std::string temp;
	int index_print;
	while (i < 8 && i != index)
	{
		std::cout << std::setw(10) << i;
		std::cout << "|";
		if (contact_list[i].getter_first_name().length() > 10)
			std::cout << contact_list[i].getter_first_name().substr(0, 9) << '.';
		else
			std::cout << std::setw(10) << contact_list[i].getter_first_name().substr(0, 10);
		std::cout << "|";
		if (contact_list[i].getter_last_name().length() > 10)
			std::cout << contact_list[i].getter_last_name().substr(0, 9) << '.';
		else
			std::cout << std::setw(10) << contact_list[i].getter_last_name().substr(0, 10);
		std::cout << "|";
		if (contact_list[i].getter_nickname().length() > 10)
			std::cout << contact_list[i].getter_nickname().substr(0, 9) << '.' << std::endl;
		else
			std::cout << std::setw(10) << contact_list[i].getter_nickname().substr(0, 10) << std::endl;;
		i++;
	}
	while (1)
	{
		input(temp, "index:\n");
		index_print = std::atoi(temp.c_str());
		if (index == 0)
		{
			std::cout << "No valid index yet please create one first" << std::endl;
			break ;
		}
		if (std::cin.eof())
			return ;
		if (index_print < 8 && index_print >= 0 && index >= index_print)
		{
			std::cout << contact_list[index_print].getter_first_name() << std::endl;
			std::cout << contact_list[index_print].getter_last_name() << std::endl;
			std::cout << contact_list[index_print].getter_nickname() << std::endl;
			std::cout << contact_list[index_print].getter_phone_number() << std::endl;
			std::cout << contact_list[index_print].getter_darkest_secret() << std::endl;
			break ;
		}
		else
			std::cout << "wrong index choose a valid ";
	}
}