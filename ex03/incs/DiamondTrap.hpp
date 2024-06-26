/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 12:26:11 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/26 11:45:37 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FlagTrap.hpp"

class DiamondTrap:  public FlagTrap, public ScavTrap
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
        //void    attack(const std::string& target);
};

#endif
