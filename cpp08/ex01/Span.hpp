/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 04:35:51 by radib             #+#    #+#             */
/*   Updated: 2026/08/08 02:58:31 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <stdexcept>
#include <limits>

class Span
{
    private :
        int *_storage;
        unsigned long long _short;
        unsigned long long _long;
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
            size_t distance = std::distance(begin, end);
            if (this->_storedCount + distance > this->_maxStorage) {
                throw std::out_of_range("Not enough space in Span to add range!");
            }
            this->_storedCount.insert(this->_storedCount.end(), begin, end);
}
};

