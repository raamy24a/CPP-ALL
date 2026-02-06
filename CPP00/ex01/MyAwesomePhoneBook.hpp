/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:54:58 by radib             #+#    #+#             */
/*   Updated: 2026/02/06 13:29:54 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

#ifndef MYAWSOMEPHONEBOOK_HPP
#define MYAWSOMEPHONEBOOK_HPP
#endif

class Contact {
public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
private:
    
};

class PhoneBook {
public:
    Contact contact_list[8];
private:
    
};