/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 15:13:46 by aramos            #+#    #+#             */
/*   Updated: 2026/04/08 17:28:44 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/* ************************************************************************** */
/*                              CONSTRUCTOR                                   */
/* ************************************************************************** */
ClapTrap::ClapTrap(std::string n)
{
	_name = n;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Default constructor called" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                               DESTRUCTOR                                   */
/* ************************************************************************** */
ClapTrap::~ClapTrap(void)
{
	std::cout << "Default destructor called" << std::endl;
	return ;
}

/* ************************************************************************** */
/*                               MEMBER FUNCTIONS                             */
/* ************************************************************************** */
void	ClapTrap::attack(const std::string& target)
{
	this->_energyPoints--;
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >= this->_hitPoints)
		this->_hitPoints = 0;
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " of damage!" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_energyPoints += amount;
	std::cout << "ClapTrap " << _name << " got repaired! It regains " << amount << " hit points!" << std::endl;
	return ;
}
