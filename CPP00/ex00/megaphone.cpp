/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 21:07:59 by radib             #+#    #+#             */
/*   Updated: 2026/02/14 16:16:48 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
	int 	i = 1;
	int 	j = 0;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		while(argv[i])
		{
			j = 0;
			while(argv[i][j])
			{
				argv[i][j] = toupper(argv[i][j]);
				j++;
			}
			i++;
		}
		i = 1;
		while (argv[i])
		{
			std::cout << argv[i];
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}