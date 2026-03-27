/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 17:14:40 by aramos            #+#    #+#             */
/*   Updated: 2026/03/27 17:27:58 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	cctv;

	cctv.complain("DEBUG");
	cctv.complain("INFO");
	cctv.complain("WARNING");
	cctv.complain("ERROR");
	return (0);
}
