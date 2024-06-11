/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 12:28:12 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/11 14:23:36 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		~ScavTrap();

		ScavTrap(ScavTrap const&);
		ScavTrap&	operator=(ScavTrap const&);
		void guardGate(void);

		void attack(const std::string& target);
};

std::ostream&	operator<<(std::ostream& stream, ScavTrap const& sl);

#endif