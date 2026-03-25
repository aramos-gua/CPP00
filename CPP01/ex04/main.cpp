/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 13:14:45 by aramos            #+#    #+#             */
/*   Updated: 2026/03/25 17:32:35 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Usage: <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	std::string		line;
	std::string		fileName = argv[1];
	std::ifstream	inFile(fileName);
	std::ofstream	outFile(fileName + ".replace");

	if (inFile && outFile)
	{
		while(std::getline(inFile, line))
		{
			if (line.find() != 0)
				std::cout << "s2 is in s1" << std::endl;
			else
				std::cout << "s2 is NOT in s1" << std::endl;
		}
	}
	return (0);
}
