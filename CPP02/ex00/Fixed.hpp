/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:28:55 by radib             #+#    #+#             */
/*   Updated: 2026/02/16 13:44:31 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(Fixed &to_copy);
	Fixed& operator=(const Fixed& other);
	int getRawBits( void) const;
	void setRawBits( int const raw);
	~Fixed();
private:
	int fixed_point;
	static const int fractional_bits = 8;
};
