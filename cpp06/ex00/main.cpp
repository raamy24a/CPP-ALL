/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:49:18 by radib             #+#    #+#             */
/*   Updated: 2026/07/15 17:37:17 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"
#include <iostream>

void	test( std::string str ) {
	std::cout << "\t-----------Test with " << str << "-----------" << std::endl;
	ScalarConverter::convert( str );
	std::cout << std::endl;
}

int	main( int ac, char **av ) {
	if (ac != 2) {
		std::cout << "Usage: ./convert <string>" << std::endl;
		return (1);
	}
	std::string	arg = av[1];
	if (arg == "-c") {
		test( "0" );
		test( "0.56" );
		test( "*" );
		test( "inf" );
		test( "+inf" );
		test( "0." );
		test( "05" );
		test( "05a" );
		test( "2 5ß" );
		test( "-846f" );
		test( "nan" );
		test( "**" );
		test( "\"" );
		test( "2147483648" );
		test( "2147483648.0f" );
		test( "2147483648.0" );
	} else {
		test( av[1] );
	}
	return (0);
}