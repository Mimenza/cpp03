/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:51:52 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/11 20:51:52 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/FlagTrap.hpp"

FlagTrap::FlagTrap(void): ClapTrap()
{
	this->_name = "Default";
	this->_hitpoints = 100;
	this->_nrgpoints = 100;
	this->_atkpoints = 30;

	std::cout << "Def constructor Flag" << std::endl;
}

FlagTrap::FlagTrap(std::string name): ClapTrap(name)
{
	//this->_name = name;
	this->_hitpoints = 100;
	this->_nrgpoints = 100;
	this->_atkpoints = 30;

	std::cout << "Param constructor Flag" << std::endl;
}

FlagTrap::~FlagTrap(void)
{
	std::cout << "Def destructor Flag" << std::endl;
}

FlagTrap::FlagTrap(const FlagTrap &copy): ClapTrap(copy)
{
	std::cout << "Copy constructor Flag called" << std::endl;
	//*this = copy;
}

FlagTrap& FlagTrap::operator=(FlagTrap const& cl)
{
	std::cout << "Operator = Flag" << std::endl;
    _name = cl._name;
	_hitpoints = cl._hitpoints;
	_nrgpoints = cl._nrgpoints;
	_atkpoints = cl._atkpoints;

	return(*this);
}

void FlagTrap::highFivesGuys(void)
{
    std::cout << "Give me a High Five!!" << std::endl;
}

