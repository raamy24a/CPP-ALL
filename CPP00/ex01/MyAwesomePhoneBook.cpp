/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:55:01 by radib             #+#    #+#             */
/*   Updated: 2026/02/05 16:43:21 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

void    add(PhoneBook my_phone_book)
{
    PhoneBook.contact_list =
}
void    search()
{
    
}

int main(void)
{
    std::string temp;
    PhoneBook   my_phone_book;
    while (1)
    {
        std::cout << "Choose between : ADD, SEARCH, EXIT" << std::endl;
        std::cin >> temp;
        if (temp !="ADD" && temp !="SEARCH" && temp !="EXIT")
            std::cout << "Wrong argument" << std::endl;
        else if (temp =="ADD")
            add(my_phone_book);
        else if (temp =="SEARCH")
            search();
        else if (temp =="EXIT")
            return (0);
    }
}