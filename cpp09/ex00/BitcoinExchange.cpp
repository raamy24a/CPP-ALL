/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 15:50:40 by radib             #+#    #+#             */
/*   Updated: 2026/08/14 16:35:52 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::cout << "BitcoinExchange constructor called" << std::endl;
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
    _db = other._db;
    _secondDb = other._secondDb;
}
BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
    if (this != &other)
    {
        _db = other._db;
        _secondDb = other._secondDb;
    }
    return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
    std::cout << "BitcoinExchange destructor called" << std::endl;
    
}
std::map<std::string, int> csvToMap(std::string fileName)
{
    int i = 0;
    int j = 0;
    std::string currentLine;
    try
    {
        std::ifstream in(fileName);
    }
    catch( std::exception& e)
    {
        std::cerr << e.what();
        return (std::map<std::string, int>());
    }
    std::ifstream in(fileName);
    while (getline (in, currentLine))
    {
        if (j == 0 && currentLine == "date,exchange_rate")
        {
            getline (in, currentLine);
            j++;
        }
        else if (j == 0)
            j++;
        i = 0;
        while (currentLine[i])
        {
            
        }
    }
}