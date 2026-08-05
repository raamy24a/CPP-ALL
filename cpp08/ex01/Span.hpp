/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 04:35:51 by radib             #+#    #+#             */
/*   Updated: 2026/08/05 05:10:11 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>

class Span
{
    private :
        std::vector<int> _storage;
    public :
        Span(unsigned int N);
        ~Span();
        void addNumber(int i);
} ;