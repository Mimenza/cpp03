/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:24:45 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/26 11:20:14 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ClapTrap.hpp"

ClapTrap::ClapTrap(void):_name(""),_hitpoints(10),_nrgpoints(10),_atkpoints(0)
{
	std::cout << "Def constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name),_hitpoints(10),_nrgpoints(10),_atkpoints(0)
{
	std::cout << "Param constructor " << name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Def destructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& cl)
{
	std::cout << "Operator = Called" << std::endl;
	_name = cl._name;
	_hitpoints = cl._hitpoints;
	_nrgpoints = cl._nrgpoints;
	_atkpoints = cl._atkpoints;

	return(*this);
}


void ClapTrap::attack(const std::string& target)
{
	if ( _nrgpoints >= 1)
	{
		std::cout << _name << " attacks " << target << ", causing " << _atkpoints << " points of damage! "<< std::endl;
	}
	else
		std::cout << "Not enough enery points" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << _name << " take " << amount << " damages." << std::endl;
	_hitpoints -= amount;
	if ((_hitpoints) <= 0)
	{
		std::cout << _name << " is dead." << std::endl;
		_hitpoints = 0;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << _name << " is repaired of " << amount << " points." << std::endl;
	_hitpoints += amount;
}

void		ClapTrap::display(std::ostream& stream) const
{
	stream << _name << " has " << _hitpoints << " hit points, " << _nrgpoints << " energy points and " << _atkpoints << " attack dammage.";
}

std::ostream&	operator<<(std::ostream& stream, ClapTrap const& cl)
{
	cl.display(stream);
	return (stream);
}
