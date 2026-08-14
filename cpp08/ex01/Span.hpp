/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 04:35:51 by radib             #+#    #+#             */
/*   Updated: 2026/08/13 15:49:09 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <stdexcept>
#include <limits>
#include <cmath>
#include <cstdlib>

class Span
{
    private :
        std::vector<int> _storage;
        unsigned long _short;
        unsigned long _long;
        int _storedCount;
        int _maxStorage;
        int _small;
        int _big;
    public :
        Span(unsigned int N);
        ~Span();
        void addNumber(int i);
        int shortestSpan();
        int longestSpan();
        class alreadyFull : public std::exception {
		public:
			virtual char const	*what(void) const throw();
        } ;
        class not_enough : public std::exception {
                public:
                    virtual char const	*what(void) const throw();
        } ;
        template <typename InputIterator>
        void addNumbers(InputIterator begin, InputIterator end) {
            while (begin != end)
            {
                addNumber(*begin);
                begin++;
            }
        }
};

