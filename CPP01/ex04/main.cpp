/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radib <radib@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 02:11:08 by radib             #+#    #+#             */
/*   Updated: 2026/02/12 15:24:03 by radib            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

int main(int argc, char **argv)
{
	std::string current_line;
	int			pos;
    if (argc != 4)
        return (std::cout << "wrong number of args" << std::endl, 0);;
	std::string	new_file = argv[1];
	new_file += ".replace";
    std::ifstream in(argv[1]);
	std::ofstream out(new_file.c_str());
	while (getline (in, current_line))
	{
		while ((pos = current_line.find(argv[2])) != -1)
		{
			current_line.erase(pos, strlen(argv[2]));
			current_line.insert(pos, argv[3]);
		}
		out << current_line << std::endl;
	}
	out.close();
	in.close();
}