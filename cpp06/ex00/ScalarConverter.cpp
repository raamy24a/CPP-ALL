/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 13:42:32 by radib             #+#    #+#             */
/*   Updated: 2026/07/17 19:24:37 by radib            ###   ########.fr       */
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
    else if (str == "+inff" || str == "+inf" || str == "inf")
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
    std::cout << str.find('f')<< ":-:" << str.length() << std::endl;
    if (str.length() == 1)
    {
        std::cout << "char: "<< str << std::endl;
        std::cout << "int: " << atoi( str.c_str() ) << std::endl;
        std::cout << "float: " << atoi( str.c_str() ) << ".0f" << std::endl;
        std::cout << "double: " << atoi( str.c_str() ) << ".0" << std::endl;
    }
    else if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan" || str == "inf")
        writelitteral(str);
    else if (str.find('.') == std::string::npos && str.find_first_not_of("-0123456789") == std::string::npos)
    {
        std::cout << "double" << std::endl;
        double tempdouble = std::strtod(str.c_str(), NULL);
        float tempfloat = std::strtof(str.c_str(), NULL);
        int tempint = static_cast<int>(tempfloat);
        char tempchar = static_cast<char>(tempfloat);
        std::cout << "char: ";
        if (isprint(tempchar))
            std::cout << tempchar<< std::endl;
        else
            std::cout << "impossible" << std::endl;
        if (tempint > tempdouble - 1)
            std::cout << "int: " << tempint << std::endl;
        else
            std::cout << "int: overflowed" << std::endl;
        std::cout << "float: " << tempfloat << "f" << std::endl;
        std::cout << "double: " << tempdouble << std::endl;
    }
    else if (str.find('.') && str.find('f') == str.length() - 1 && str.find_first_not_of("-0123456789f.") == std::string::npos)
    {
        std::cout << "double" << std::endl;
        double tempdouble = std::strtod(str.c_str(), NULL);
        float tempfloat = std::strtof(str.c_str(), NULL);
        int tempint = static_cast<int>(tempfloat);
        char tempchar = static_cast<char>(tempfloat);
        std::cout << "char: ";
        if (isprint(tempchar))
            std::cout << tempchar<< std::endl;
        else
            std::cout << "impossible" << std::endl;
        if (tempint > tempdouble - 1)
            std::cout << "int: " << tempint << std::endl;
        else
            std::cout << "int: overflowed" << std::endl;
        std::cout << "float: " << tempfloat << "f" << std::endl;
        std::cout << "double: " << tempdouble << std::endl;
    }
    else if(str.find('.') != str.length() - 1 && str.find_first_not_of("-0123456789.") == std::string::npos)
    {
        std::cout << "double" << std::endl;
        double tempdouble = std::strtod(str.c_str(), NULL);
        float tempfloat = std::strtof(str.c_str(), NULL);
        int tempint = static_cast<int>(tempfloat);
        char tempchar = static_cast<char>(tempfloat);
        std::cout << "char: ";
        if (isprint(tempchar))
            std::cout << tempchar<< std::endl;
        else
            std::cout << "impossible" << std::endl;
        if (tempint > tempdouble - 1)
            std::cout << "int: " << tempint << std::endl;
        else
            std::cout << "int: overflowed" << std::endl;
        std::cout << "float: " << tempfloat << "f" << std::endl;
        std::cout << "double: " << tempdouble << std::endl;
    }
    else
        std::cerr << "try a char, an int, a float or a double." << std::endl;
    
    return ;
}