/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 04:35:51 by radib             #+#    #+#             */
/*   Updated: 2026/08/07 05:23:54 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>

class Span
{
    private :
        int *_storage;
        int _short;
        int _long;
        int _storedCount;
        int _maxStorage;
    public :
        Span(unsigned int N);
        ~Span();
        void addNumber(int i);
        int shortestSpan();
        int longestSpan();
} ;