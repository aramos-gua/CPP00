/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramos <contact@aramos.dev>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 15:02:43 by aramos            #+#    #+#             */
/*   Updated: 2026/04/09 15:17:17 by aramos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/* ************************************************************************** */
/*                              CONSTRUCTOR                                   */
/* ************************************************************************** */
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap " << _name << " constructor called." << std::endl;
	std::cout << "name: "<< _name << std::endl;
	std::cout << "hitPoints: "<< _hitPoints << std::endl;
	std::cout << "energyPoints: "<< _energyPoints << std::endl;
	std::cout << "attackDamage: "<< _attackDamage << std::endl;
}

/* ************************************************************************** */
/*                               DESTRUCTOR                                   */
/* ************************************************************************** */
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destructor called." << std::endl;
	return ;
}

/* ************************************************************************** */
/*                               MEMBER FUNCTIONS                             */
/* ************************************************************************** */
void	FragTrap::attack(const std::string& target)
{
	if (this->_energyPoints == 0 || this->_hitPoints == 0)
	{
		std::cout << "FragTrap " << _name << " can't attack! Reason: ";
		if (this->_hitPoints == 0)
			std::cout << " Dead." << std::endl;
		else
			std::cout << " Not enough energy." << std::endl;
		return ;
	}
	this->_energyPoints--;
	std::cout << "FragTrap " << _name << " tickles " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}
void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap " << _name << " is kindly requesting high fives!" << std::endl;
	return ;
}
