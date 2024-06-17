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
	this->_name = "";
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

FlagTrap& FlagTrap::operator=(FlagTrap const& cl)
{
	std::cout << "Operator = Flag" << std::endl;
    operator=(cl);
	return(*this);
}

void FlagTrap::highFivesGuys(void)
{
    std::cout << "Give me a High Five!!" << std::endl;
}

std::ostream&	operator<<(std::ostream& stream, FlagTrap const& sl)
{
	sl.display(stream);
	return (stream);
}
