/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:28:14 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/24 16:21:21 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_name = "Default Scav";
	this->_hitpoints = 100;
	this->_nrgpoints = 50;
	this->_atkpoints = 20;

	std::cout << "Def constructor Scav" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	//this->_name = name;
	this->_hitpoints = 100;
	this->_nrgpoints = 50;
	this->_atkpoints = 20;

	std::cout << "Param constructor Scav" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Def destructor Scav" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << "Copy constructor Scav called" << std::endl;
	//*this = copy;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& cl)
{
	std::cout << "Operator = Scav" << std::endl;
    this->_name = cl._name;
	this->_hitpoints = cl._hitpoints;
	this->_nrgpoints = cl._nrgpoints;
	this->_atkpoints = cl._atkpoints;
	return(*this);
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if ( _nrgpoints >= 1)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _atkpoints << " points of damage! "<< std::endl;
	}
	else
		std::cout << "ScavTrap Not enough enery points" << std::endl;
}