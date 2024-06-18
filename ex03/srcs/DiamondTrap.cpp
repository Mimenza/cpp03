/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:26:10 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/18 15:38:44 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void):ClapTrap() 
{
	this->_name = "Default";
	this->_hitpoints = 100;
	this->_nrgpoints = 50;
	this->_atkpoints = 30;

	std::cout << "Def constructor Diamond" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name") 
{
	this->_name = name;
	this->_hitpoints = 100;
	this->_nrgpoints = 50;
	this->_atkpoints = 30;

	std::cout << "Param constructor Diamond" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Def destructor Diamond" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy):ClapTrap(copy), ScavTrap(copy), FlagTrap(copy)
{
	std::cout << "Copy constructor Diamond called" << std::endl;
	*this = copy;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const& cl)
{
	std::cout << "Operator = Diamond" << std::endl;
    _name = cl._name;
	_hitpoints = cl._hitpoints;
	_nrgpoints = cl._nrgpoints;
	_atkpoints = cl._atkpoints;

	return(*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name;
	std::cout << " and my ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
