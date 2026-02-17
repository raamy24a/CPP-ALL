/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:28:53 by radib             #+#    #+#             */
/*   Updated: 2026/02/17 13:18:34 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &to_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point = to_copy.fixed_point;
}
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixed_point);
}
void Fixed::setRawBits( int const raw)
{
	this->fixed_point = raw;
}
float Fixed::toFloat( void ) const
{
	return (this->fixed_point / 256.0);
}
int Fixed::toInt( void ) const
{
	return (this->fixed_point / 256);
}
Fixed::Fixed(const int const_integer)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = const_integer * 256;
}
Fixed::Fixed(const float const_float)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = const_float * 256;
}
	
Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other) {
		this->fixed_point = other.fixed_point;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

std::ostream& operator<<(std::ostream& stream, const Fixed& fixed)
{
	stream << fixed.toFloat();
	return stream;
}
bool Fixed::operator>(const Fixed& other)
{
	
}
bool Fixed::operator<(const Fixed& other)
{
	
}
bool Fixed::operator>=(const Fixed& other)
{
	
}
bool Fixed::operator<=(const Fixed& other)
{
	
}
bool Fixed::operator==(const Fixed& other)
{
	
}
bool Fixed::operator!=(const Fixed& other)
{
	
}
Fixed& Fixed::operator+(const Fixed& other)
{
	
}
Fixed& Fixed::operator-(const Fixed& other)
{
	
}
Fixed& Fixed::operator*(const Fixed& other)
{
	
}
Fixed& Fixed::operator/(const Fixed& other)
{
	
}
Fixed& Fixed::operator++()
{
	
}
Fixed& Fixed::operator--()
{
	
}
Fixed& Fixed::operator++(int)
{
	
}
Fixed& Fixed::operator--(int)
{
	
}