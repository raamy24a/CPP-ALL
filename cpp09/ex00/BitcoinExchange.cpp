/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/14 15:50:40 by radib             #+#    #+#             */
/*   Updated: 2026/08/16 04:24:16 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

bool isValidDate(int year, int month, int day) {
    if (year < 1 || month < 1 || month > 12 || day < 1) {
        return false;
    }
    static const int daysInMonth[] = {
        0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
    };
    int maxDays = daysInMonth[month];
    if (month == 2 && isLeapYear(year)) {
        maxDays = 29;
    }
    return day <= maxDays;
}

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
std::map<std::string, int> BitcoinExchange::csvToMap(std::string fileName)
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
            if (isValidDate((atoi(currentLine.substr(0, 4).c_str())), atoi(currentLine.substr(5, 2).c_str()), atoi(currentLine.substr(8, 9).c_str())))
                this->_db.insert(currentLine.substr(0, 9), currentLine.substr(12, currentLine.length()));
            
        }
    }
}