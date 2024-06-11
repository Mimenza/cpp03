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

FlagTrap::FlagTrap(void): ClapTrap("", 100, 100, 30)
{
	std::cout << "Def constructor Scav" << std::endl;
}

FlagTrap::FlagTrap(std::string name): ClapTrap("", 100, 100, 30)
{
	std::cout << "Param constructor Scav" << std::endl;
}

FlagTrap::~FlagTrap(void)
{
	std::cout << "Def destructor Scav" << std::endl;
}

FlagTrap& FlagTrap::operator=(FlagTrap const& cl)
{
	std::cout << "Operator = Scav" << std::endl;
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
