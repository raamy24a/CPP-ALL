/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/07 13:42:23 by radib             #+#    #+#             */
/*   Updated: 2026/07/15 17:40:51 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include <cstdlib>
#include <sstream>


class ScalarConverter {
private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& src);
    ScalarConverter& operator=(const ScalarConverter& src);
    ~ScalarConverter();

public:
    static void convert(const std::string& literal);
};