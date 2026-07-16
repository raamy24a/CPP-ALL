/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 13:42:32 by radib             #+#    #+#             */
/*   Updated: 2026/07/15 18:54:09 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


void writelitteral(const std::string& str)
{
    if (str == "-inff" || str == "-inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: -inff" << std::endl;
        std::cout << "double: -inf" << std::endl;
    }
    else if (str == "+inff" || str == "+inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: +inff" << std::endl;
        std::cout << "double: +inf" << std::endl;
    }
    else if (str == "nan" || str == "nanf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
}

static void convert(const std::string& str)
{
    if (str.length() == 1)
    {
        std::cout << "char: "<< str << std::endl;
        std::cout << "int: " << atoi( str.c_str() ) << std::endl;
        std::cout << "float: " << atoi( str.c_str() ) + ".0f" << std::endl;
        std::cout << "double: " << atoi( str.c_str() ) + ".0" << std::endl;
    }
    else if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
        writelitteral(str);
    else if (!str.find('.'))
    {
        if (atoi(str.c_str()) <= 127 && atoi(str.c_str()) >= 32)
        {
           std::cout << "char: " << str << std::endl;
        }
        else if (atoi(str.c_str()) <= 31 && atoi(str.c_str()) >= 0)
           std::cout << "char: Non displayable" << str << std::endl;
        else
            std::cout << "char: impossible" << str << std::endl;
        std::cout << "int: " << atoi( str.c_str() ) << std::endl;
        std::cout << "float: " << atoi( str.c_str() ) + ".0f" << std::endl;
        std::cout << "double: " << atoi( str.c_str() ) + ".0" << std::endl;
    }
    else if (str.find('.') && str.find('f'))
    {
        
    }
    
    return ;
}