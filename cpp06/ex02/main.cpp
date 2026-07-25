/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.42belgium.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 10:49:18 by radib             #+#    #+#             */
/*   Updated: 2026/07/25 04:00:00 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "C.hpp"
#include "B.hpp"
#include "A.hpp"


Base *generate(void)
{
    srand(time(0));
    int a = rand() % 3;
    if (a == 0)
    {
        A *a = new A();
        return a;
    }
    else if (a == 1)
    {
        B *a = new B();
        return a;
    }
    else
    {
        C *a = new C();
        return a;
    }
}
void identify(Base* p)
{
    A *a = dynamic_cast <A*> (p);
    if (a != NULL)
        std::cout << "A" << std::endl;
    B *b = dynamic_cast <B*> (p);
    if (b != NULL)
        std::cout << "B" << std::endl;
    C *c = dynamic_cast <C*> (p);
    if (c != NULL)
        std::cout << "C" << std::endl;
}
void identify(Base& p)
{
    try
    {
        dynamic_cast <C&> (p);
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {}
    try
    {
        dynamic_cast <A&> (p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {}
    try
    {
        dynamic_cast <B&> (p);
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e)
    {}
}
int	main( void ) {
    srand(time(NULL));
	Base* first = generate();
	identify(first);
	identify(*first);
	delete first;
	Base* second = generate();
	identify(second);
	identify(*second);
	delete second;
	Base* third = generate();
	identify(third);
	identify(*third);
	delete third;
	return (0);
}