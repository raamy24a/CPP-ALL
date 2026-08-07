/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 04:34:54 by radib             #+#    #+#             */
/*   Updated: 2026/08/07 05:25:59 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
    int *p = new int[N];
    _storage = p;
    _short = 0;
    _long = 0;
    _storedCount = 0;
    _maxStorage = N - 1;
}
void Span::addNumber(int i)
{
    if (_storedCount => _maxStorage)
        throw already_full;
    _storage[_storedCount] = i;
    _storedCount++;
}
int Span::shortestSpan()
{
    if (_storedCount <= 1)
        throw not_enough;
    return (_short);
}
int Span::longestSpan()
{
    if (_storedCount <= 1)
        throw not_enough;
    return (_long);
}