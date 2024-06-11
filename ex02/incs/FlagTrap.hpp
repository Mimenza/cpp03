/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:51:54 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/11 20:51:54 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FLAGTRAP_HPP
# define FLAGTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class FlagTrap : public ClapTrap
{
	public:
		FlagTrap();
		FlagTrap(std::string name);
		~FlagTrap();

		FlagTrap(FlagTrap const&);
		FlagTrap&	operator=(FlagTrap const&);
		void highFivesGuys(void);
};

std::ostream&	operator<<(std::ostream& stream, FlagTrap const& sl);

#endif