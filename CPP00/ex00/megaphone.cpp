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

// int	IsLower(char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (1);
// 	return (0);
// }
//
// void	ToUpper(char *str)
// {
// 	int	i;
//
// 	i = 0;
// 	while(str[i])
// 	{
// 		if (IsLower(str[i]))
// 			std::cout.put(str[i] - 32);
// 		else
// 			std::cout.put(str[i]);
// 		i++;
// 	}
// }

// int	IsLower(char c)
// {
// 	if (c >= 'a' && c <= 'z')
// 		return (1);
// 	return (0);
// }

void	ToUpper(char c)
{
	if (c >= 'a' && c <= 'z')
		std::cout.put(c - 32);
	else
		std::cout.put(c);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[i])
		{
			j = 0;
			while (argv[i][j])
			{
				if ((argv[i + 1] && argv[i + 1][0] != ' ') || (argv[i][j + 1] == '\0' && argv[i][j] != ' '))
					std::cout.put(' ');
				ToUpper(argv[i][j]);
				j++;
			}
			i++;
		}
	}
	std::cout << "\n";
	return (0);
}
