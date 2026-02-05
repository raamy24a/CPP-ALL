/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MyAwesomePhoneBook.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 12:54:58 by radib             #+#    #+#             */
/*   Updated: 2026/02/05 16:43:14 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef MYAWSOMEPHONEBOOK_HPP
#define MYAWSOMEPHONEBOOK_HPP
#endif

class Contact {
public:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;

private:
    std::string darkest_secret;
};

class PhoneBook {
public:
    Contact contact_list[8];
private:
    
};