/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:28:14 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/11 14:25:53 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap("", 100, 50, 20)
{
	std::cout << "Def constructor Scav" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "Param constructor Scav" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Def destructor Scav" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& cl)
{
	std::cout << "Operator = Scav" << std::endl;
    operator=(cl);
	return(*this);
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

std::ostream&	operator<<(std::ostream& stream, ScavTrap const& sl)
{
	sl.display(stream);
	return (stream);
}