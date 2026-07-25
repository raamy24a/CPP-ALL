/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 23:30:28 by radib             #+#    #+#             */
/*   Updated: 2026/07/18 00:34:25 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <stdint.h>
#include "Data.h"

class Serializer {
private:
    Serializer();
    Serializer(const Serializer& src);
    Serializer& operator=(const Serializer& src);
    ~Serializer();

public:
    static uintptr_t serialize(Data* ptr);
    static Data* deserialize(uintptr_t raw);
    
};