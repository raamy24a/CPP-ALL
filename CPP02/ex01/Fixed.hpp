/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:28:55 by radib             #+#    #+#             */
/*   Updated: 2026/02/17 11:51:41 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const int const_integer);
	Fixed(const float const_float);
	Fixed(const Fixed &to_copy);
	Fixed& operator=(const Fixed& other);
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void) const;
	void setRawBits( int const raw);
	~Fixed();
private:
	int fixed_point;
	static const int fractional_bits = 8;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);
