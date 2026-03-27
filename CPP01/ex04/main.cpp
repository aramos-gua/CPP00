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
	if (argc != 4)
	{
		std::cout << "Usage: <filename> <string1> <string2>" << std::endl;
		return (1);
	}
	size_t			pos;
	std::string		s1;
	std::string		s2;
	std::string		line;
	std::string		fileName = argv[1];
	std::ifstream	inFile(fileName.c_str());
	std::ofstream	outFile((fileName + ".replace").c_str());

	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty())
		return (1);
	if (inFile && outFile)
	{
		while(std::getline(inFile, line))
		{
			pos = 0;
			while ((pos = line.find(s1, pos)) != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
				pos += s2.size();
			}
			outFile << line << std::endl;
		}
	}
	return (0);
}
