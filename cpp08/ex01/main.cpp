/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:49:18 by radib             #+#    #+#             */
/*   Updated: 2026/08/08 02:57:02 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <vector>

int main()
{
    std::cout << "=== 1. Basic Subject Test ===" << std::endl;
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n=== 2. Testing Iterator Range (addNumbers) ===" << std::endl;
    try
    {
        Span sp = Span(10000);
        
        // Fill a vector with 10,000 numbers
        std::vector<int> numbers;
        for (int i = 0; i < 10000; ++i)
            numbers.push_back(i * 3);

        // Add all 10,000 elements at once using iterator range
        sp.addNumbers(numbers.begin(), numbers.end());

        std::cout << "Successfully added 10,000 numbers!" << std::endl;
        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest Span : " << sp.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    std::cout << "\n=== 3. Testing Exception: Full Capacity ===" << std::endl;
    try
    {
        Span sp = Span(2);
        sp.addNumber(10);
        sp.addNumber(20);
        std::cout << "Trying to add a 3rd number to a capacity 2 Span..." << std::endl;
        sp.addNumber(30); // Should throw exception
    }
    catch (std::exception &e)
    {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }

    std::cout << "\n=== 4. Testing Exception: Not Enough Numbers ===" << std::endl;
    try
    {
        Span sp = Span(5);
        sp.addNumber(42);
        std::cout << "Trying to compute span with only 1 number..." << std::endl;
        sp.shortestSpan(); // Should throw exception
    }
    catch (std::exception &e)
    {
        std::cout << "Caught expected exception: " << e.what() << std::endl;
    }

    return 0;
}