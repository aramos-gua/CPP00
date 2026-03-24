/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 10:10:50 by aramos            #+#    #+#             */
/*   Updated: 2026/03/24 10:10:53 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string str;
	std::string	*strPTR;
	std::string	&strREF = str;

	str = "HI THIS IS BRAIN";
	strPTR = &str;
	std::cout << "\nmemory address of:" << std::endl;
	std::cout << "string variable: " << &str << std::endl;
	std::cout << "strPTR: " << &str << std::endl;
	std::cout << "strREF: " << &strREF << std::endl;
	std::cout << "\nContents of:" << std::endl;
	std::cout << "string variable: " << str << std::endl;
	std::cout << "strPTR: " << strPTR << std::endl;
	std::cout << "strREF: " << strREF << std::endl;
}
