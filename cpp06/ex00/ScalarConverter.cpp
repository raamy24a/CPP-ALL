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

void ScalarConverter::convert(const std::string& str)
{
    if (str.length() == 1)
    {
        std::cout << "char: "<< str << std::endl;
        std::cout << "int: " << atoi( str.c_str() ) << std::endl;
        std::cout << "float: " << atoi( str.c_str() ) << ".0f" << std::endl;
        std::cout << "double: " << atoi( str.c_str() ) << ".0" << std::endl;
    }
    else if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
        writelitteral(str);
    else if (str.find('.') == str.length())
    {
        if (atoi(str.c_str()) <= 127 && atoi(str.c_str()) >= 32)
        {
           std::cout << "char: " << (char)atoi(str.c_str()) << std::endl;
        }
        else if (atoi(str.c_str()) <= 31 && atoi(str.c_str()) >= 0)
           std::cout << "char: Non displayable" << std::endl;
        else
            std::cout << "char: impossible" << std::endl;
        std::cout << "int: " << atoi( str.c_str() ) << std::endl;
        std::cout << "float: " << atoi( str.c_str() ) << ".0f" << std::endl;
        std::cout << "double: " << atoi( str.c_str() ) << ".0" << std::endl;
    }
    else if (str.find('.') && str.find('f') == str.length())
    {
        float tempfloat = std::strtof(str.c_str(), NULL);
        int tempint = static_cast<int>(tempfloat);
        char tempchar = static_cast<char>(tempfloat);
        double tempdouble = static_cast<double>(tempfloat);
        
        std::cout << "char: " << tempchar;
        if (tempchar == 0)
            std::cout << "impossible" << std::endl;
        else
            std::cout << std::endl;
        std::cout << "int: " << tempint << std::endl;
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << tempdouble << std::endl;
    }
    else if(str.find('.'))
    {
        float tempfloat = std::strtof(str.c_str(), NULL);
        int tempint = static_cast<int>(tempfloat);
        char tempchar = static_cast<char>(tempfloat);
        std::cout << "char: " << tempchar;
        if (tempchar == 0)
            std::cout << "impossible" << std::endl;
        else
            std::cout << std::endl;
        std::cout << "int: " << tempint << std::endl;
        std::cout << "float: " << tempfloat << "f" << std::endl;
        std::cout << "double: " << str << std::endl;
    }
    else
        std::cerr << "try a char, an int, a float or a double." << std::endl;
    
    return ;
}