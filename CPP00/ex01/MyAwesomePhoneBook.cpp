/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:55:01 by radib             #+#    #+#             */
/*   Updated: 2026/02/06 14:15:54 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesomePhoneBook.hpp"

int    add(PhoneBook *my_phone_book, int i)
{
    std::cout << "first name:";
    std::getline(std::cin, (*my_phone_book).contact_list[i].first_name);
    std::cout << "last name:";
    std::getline(std::cin, (*my_phone_book).contact_list[i].last_name);
    std::cout << "nickname:";
    std::getline(std::cin, (*my_phone_book).contact_list[i].nickname);
    std::cout << "phone number:";
    std::getline(std::cin, (*my_phone_book).contact_list[i].phone_number);
    std::cout << "darkest secret:";
    std::getline(std::cin, (*my_phone_book).contact_list[i].darkest_secret);
    return (1);
}
void    search(PhoneBook my_phone_book)
{
    int i = 0; 
    while(my_phone_book.contact_list[i].first_name != "")
    {
        std::cout << "|";
        std::cout << std::setw(10) << i;
        std::cout << "|";
        std::cout << std::setw(10) << my_phone_book.contact_list[i].first_name;
        std::cout << "|";
        std::cout << std::setw(10) << my_phone_book.contact_list[i].last_name;
        std::cout << "|";
        std::cout << std::setw(10) << my_phone_book.contact_list[i].nickname;
        std::cout << "|" << std::endl;
        i++;
    }

}

int main(void)
{
    std::string temp;
    int         index = 0;
    PhoneBook   my_phone_book;
    while (1)
    {
        std::cout << "Choose between : ADD, SEARCH, EXIT" << std::endl;
        std::getline(std::cin, temp);
        if (temp !="ADD" && temp !="SEARCH" && temp !="EXIT")
            std::cout << "Wrong argument" << std::endl;
        else if (temp =="ADD")
            index += add(&my_phone_book, index);
        else if (temp =="SEARCH")
            search(my_phone_book);
        else if (temp =="EXIT")
            return (0);
    }
}