/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 14:09:28 by aramos            #+#    #+#             */
/*   Updated: 2026/04/09 15:17:26 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* ************************************************************************** */
/*                              CONSTRUCTOR                                   */
/* ************************************************************************** */
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " constructor called." << std::endl;
	std::cout << "name: "<< _name << std::endl;
	std::cout << "hitPoints: "<< _hitPoints << std::endl;
	std::cout << "energyPoints: "<< _energyPoints << std::endl;
	std::cout << "attackDamage: "<< _attackDamage << std::endl;
}

/* ************************************************************************** */
/*                               DESTRUCTOR                                   */
/* ************************************************************************** */
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destructor called."<< std::endl;
	return ;
}

/* ************************************************************************** */
/*                               MEMBER FUNCTIONS                             */
/* ************************************************************************** */
void	ScavTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "ScavTrap " << _name << " can't attack! Reason: ";
		if (this->_hitPoints == 0)
			std::cout << " Dead." << std::endl;
		else
			std::cout << " Not enough energy." << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "ScavTrap " << _name << " bombs " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode!" << std::endl;
	return ;
}
