/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <alejandro.ramos.gua@gmail.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 15:12:37 by aramos            #+#    #+#             */
/*   Updated: 2025/10/08 15:12:39 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (argv[++i])
	{
		std::string s(argv[i]);
		for (std::string::iterator it = s.begin(); it != s.end(); it++)
			*it = std::toupper(*it);
		std::cout << s;
	}
	std::cout << "\n";
	return (0);
}
