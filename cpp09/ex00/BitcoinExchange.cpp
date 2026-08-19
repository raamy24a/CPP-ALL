/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 15:50:40 by radib             #+#    #+#             */
/*   Updated: 2026/08/19 06:09:41 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    std::cout << "BitcoinExchange default constructor called" << std::endl;
}
void BitcoinExchange::executeBitcoin()
{
    std::map<Date, float>::iterator it = _secondDb.begin();
    while (it != _secondDb.end())
    {
        if ((*it).first.isValid())
            std::cerr << "invalid date" << std::endl;
        else if ((*it).second > 1000 || (*it).second < 0)
            std::cerr << "try a value between 0 and 1000" << std::endl;
        else
        {
            std::map<Date, float>::iterator it2 = _db.begin();
            while (it2 != _db.end())
            {
                if ((*it2).first[3] >= (*it).first[3])
                    break;
                else
                    it2++;
            }
            std::cout << (*it).first << " => " << (*it).second << (*it).second * (*it2).second << std::endl;
        }
        it++;
    }
}
BitcoinExchange::BitcoinExchange(std::string fileName)
{
    std::cout << "BitcoinExchange constructor called" << std::endl;
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
        _db.insert(std::make_pair(Date(currentLine), atof(&currentLine.c_str()[11])));
    }
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
        _secondDb.insert(std::make_pair(Date(currentLine), atof(&currentLine.c_str()[11])));
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
