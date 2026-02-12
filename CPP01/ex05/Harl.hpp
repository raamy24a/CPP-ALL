/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:28:37 by radib             #+#    #+#             */
/*   Updated: 2026/02/12 21:21:55 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
public:
    Harl();
    ~Harl();
    void complain( std::string level );

private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};

