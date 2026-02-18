/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:28:55 by radib             #+#    #+#             */
/*   Updated: 2026/02/18 10:01:22 by radib            ###   ########.fr       */
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
	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;
	void operator+(const Fixed& other);
	void operator-(const Fixed& other);
	void operator*(const Fixed& other);
	void operator/(const Fixed& other);
	void operator++();
	void operator--();
	void operator++(int);
	void operator--(int);
	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits( void) const;
	void setRawBits( int const raw);
	~Fixed();
	static const Fixed& max(const Fixed& first, const Fixed& second);
	static const Fixed& min(const Fixed& first, const Fixed& second);
	static Fixed& max( Fixed& first,  Fixed& second);
	static Fixed& min( Fixed& first,  Fixed& second);

private:
	int fixed_point;
	static const int fractional_bits = 8;
};

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed);
