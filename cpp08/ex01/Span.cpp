/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 04:34:54 by radib             #+#    #+#             */
/*   Updated: 2026/08/08 02:56:07 by radib            ###   ########.fr       */
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

Span::Span(unsigned int N)
{
    int *p = new int[N];
    _storage = p;
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
    _storage[_storedCount] = i;
    _storedCount++;
    int count = 0;
    if (_storedCount == 1)
    {
        _small = i;
        _big = i;
    }
    if (_small > i)
        _small = i;
    if (_big < i)
        _big = i;

    while (count < _storedCount - 1)
    {
        if (i < _storage[count] && _storage[count] - i < _short)
            _short = _storage[count] - i;
        else if (_storage[count] - i < _short)
            _short = i - _storage[count];
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