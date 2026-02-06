/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:55:01 by radib             #+#    #+#             */
/*   Updated: 2026/02/06 02:32:29 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

int    add(PhoneBook my_phone_book)
{
    std::cout << "first name:";
    std::cin >> my_phone_book.contact_list->first_name;
    std::cout << "last name:";
    std::cin >> my_phone_book.contact_list->last_name;
    std::cout << "nickname:";
    std::cin >> my_phone_book.contact_list->nickname;
    std::cout << "phone number:";
    std::cin >> my_phone_book.contact_list->phone_number;
    std::cout << "darkest secret:";
    std::cin >> my_phone_book.contact_list->darkest_secret;
    return (1);
}
void    search(PhoneBook my_phone_book)
{
    int i = 0;


        std::cout << i;
        std::cout << my_phone_book.contact_list[i].first_name.substr(0, 10);
        std::cout << my_phone_book.contact_list[i].last_name.substr(0, 10);
        std::cout << my_phone_book.contact_list[i].nickname.substr(0, 10);
        i++;

}

int main(void)
{
    std::string temp;
    int         index = 0;
    PhoneBook   my_phone_book;
    while (1)
    {
        std::cout << "Choose between : ADD, SEARCH, EXIT" << std::endl;
        std::cin >> temp;
        if (temp !="ADD" && temp !="SEARCH" && temp !="EXIT")
            std::cout << "Wrong argument" << std::endl;
        else if (temp =="ADD")
            index += add(my_phone_book);
        else if (temp =="SEARCH")
            search(my_phone_book);
        else if (temp =="EXIT")
            return (0);
    }
}