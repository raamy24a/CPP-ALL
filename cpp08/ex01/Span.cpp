/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 04:34:54 by radib             #+#    #+#             */
/*   Updated: 2026/08/13 16:06:48 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

char const *Span::alreadyFull::what(void) const throw()
{
	return "The Span is already full";
}

char const *Span::not_enough::what(void) const throw()
{
	return "not enough numbers yet add more";
}
Span::~Span()
{
    
}
Span::Span(unsigned int N)
{
    _short = 90000000000;
    _long = 0;
    _storedCount = 0;
    _small = 0;
    _big = 0;
    _maxStorage = N;
}
void Span::addNumber(int i)
{
    if (_storedCount >= _maxStorage)
        throw alreadyFull();
    _storage.push_back(i);
    _storedCount++;
    int count = 0;
    if (_storedCount >= 1)
    {
        _small = std::min(_small, i);
        _big = std::max(_big, i);
    }
    while (count < _storedCount - 1)
    {
        _short = i - _storage[count];
        _short = abs(_short);
        count++;
    }
    _long = _big - _small;
}
int Span::shortestSpan()
{
    if (_storedCount <= 1)
        throw not_enough();
    return (_short);
}
int Span::longestSpan()
{
    if (_storedCount <= 1)
        throw not_enough();
    return (_long);
}