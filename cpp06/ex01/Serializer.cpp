/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 23:30:33 by radib             #+#    #+#             */
/*   Updated: 2026/07/23 20:44:34 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Serializer.hpp"

Serializer::Serializer( void ){
    std::cout << "Default constructor called" << std::endl;
}

Serializer::Serializer( const Serializer& other ){
    *this = other;
    return ;
}

Serializer& Serializer::operator=( const Serializer& other ){
    (void)other;
    return *this;
}

Serializer::~Serializer(){
    std::cout << "Default destructor called" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}