/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/30 14:58:49 by aramos            #+#    #+#             */
/*   Updated: 2026/07/30 14:59:42 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ostream>
#include "inc/Bureaucrat.hpp"

int	main(void)
{
	try
	{
		Bureaucrat a("Alex", 1);
		int c = a.getGrade();
		std::cout << c << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
