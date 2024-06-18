/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:24:47 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/18 11:03:04 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
		std::string		_name;
		int				_hitpoints; //health of the player
		unsigned int	_nrgpoints; //energy of the player (stamina)
		unsigned int	_atkpoints; //damage of the player attack

	public:
		ClapTrap();
		ClapTrap(std::string name);
		~ClapTrap();

		ClapTrap(const ClapTrap &copy);
		ClapTrap&	operator=(ClapTrap const&);

		void attack(const std::string& target); 
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void display(std::ostream& stream) const;
};

std::ostream&	operator<<(std::ostream& stream, ClapTrap const& cl);

#endif