/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 10:08:12 by aramos            #+#    #+#             */
/*   Updated: 2026/03/24 10:08:13 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


const std::string	&Weapon::getType(void) const
{
	return (type);
}


void	Weapon::setType(std::string t)
{
	type = t;
	return ;
}
