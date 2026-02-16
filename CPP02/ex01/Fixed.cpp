/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:28:53 by radib             #+#    #+#             */
/*   Updated: 2026/02/16 16:10:01 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	this->fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed &to_copy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->fixed_point = to_copy.fixed_point;
}
Fixed::~Fixed()
{
	std::cout << "Fixed destructor called" << std::endl;
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
	this->fixed_point << 8;
}
int Fixed::toInt( void ) const
{
	this->fixed_point >> 8;
}
Fixed::Fixed(const int const_integer)
{
	this->fixed_point = const_integer;
	this->fixed_point << 8;
}
Fixed::Fixed(const float const_float)
{
	this->fixed_point = const_float;
	this->fixed_point >> 8;
}
	
Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other) {
		this->fixed_point = other.fixed_point;
	}
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}
void operator<<(float)
{
	std::cout << 