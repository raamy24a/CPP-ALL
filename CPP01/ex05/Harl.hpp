/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:28:37 by radib             #+#    #+#             */
/*   Updated: 2026/03/25 18:05:15 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl
{
public:
    Harl();
    ~Harl();
    void complain( std::string level );
	void complain_switch( int level );

private:
    void debug( void );
    void info( void );
    void warning( void );
    void error( void );
};

