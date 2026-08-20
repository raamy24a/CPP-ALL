/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 15:50:40 by radib             #+#    #+#             */
/*   Updated: 2026/08/19 18:31:05 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::cout << "BitcoinExchange default constructor called" << std::endl;
    int j = 0;
    std::string currentLine;
    try
    {
        std::ifstream in("data.csv");
    }
    catch( std::exception& e)
    {
        std::cerr << e.what();
        return ;
    }
    std::ifstream in("data.csv");
    while (getline (in, currentLine))
    {
        if (j == 0 && currentLine == "date,exchange_rate")
        {
            getline (in, currentLine);
            j++;
        }
        else if (j == 0)
            j++;
        // std::cout << currentLine << ": " << std::strtof(&currentLine.c_str()[11], NULL) << std::endl;
        _db.insert(std::make_pair(Date(currentLine),  std::strtof(&currentLine.c_str()[11], NULL)));
    }
}
void BitcoinExchange::executeBitcoin(std::string fileName)
{
    std::string currentLine;
    int j = 1;
    try
    {
        std::ifstream in2(fileName.c_str());
    }
    catch( std::exception& e)
    {
        std::cerr << e.what();
        return ;
    }
    std::ifstream in2(fileName.c_str());
    while (getline (in2, currentLine))
    {
        if (j == 1 && currentLine == "date | value")
        {
            getline (in2, currentLine);
            j++;
        }
        else if (j == 1)
            j++;
        Date tempDate;
        tempDate = Date(currentLine);
        float tempFloat = std::strtof(&currentLine.c_str()[12], NULL);
        if (!tempDate.isValid() || tempDate[3] <  2009 * 10000 + 100 +2)
            std::cerr << "Error: bad input date is invalid" << std::endl;
        else if (tempFloat > 1000 )
            std::cerr << "Error: too large a number." << std::endl;
        else if (tempFloat < 0)
            std::cerr << "Error: not a positive number" << std::endl;
        else
        {
            std::map<Date, float>::iterator it2 = _db.begin();
            while (it2 != _db.end())
            {
                if ((*it2).first[3] >= tempDate[3])
                    break;
                else
                    it2++;
            }
            std::cout << tempDate << " => " << tempFloat << " = " << tempFloat * (*it2).second << std::endl;
        }
    }

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
