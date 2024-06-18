/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:26:11 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/18 15:38:39 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FlagTrap.hpp"

class DiamondTrap: public ScavTrap, public FlagTrap
{
    private:
        std::string _name;
    
    public:
        DiamondTrap();
		DiamondTrap(std::string name);
		~DiamondTrap();

		DiamondTrap(const DiamondTrap &copy);
        DiamondTrap&	operator=(DiamondTrap const&);

        void    whoAmI(void);
        void    attack(const std::string& target);
};

#endif
