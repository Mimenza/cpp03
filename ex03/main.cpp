/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:23:55 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/24 16:22:37 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/DiamondTrap.hpp"

int main(void)
{
	//ClapTrap	a("arthur");
	//ClapTrap	b("dutch");
	//ClapTrap	c;
	//ScavTrap	d("micka");
	//FragTrap	e("e");

	DiamondTrap	diamond("patata");

	diamond.whoAmI();
	diamond.display(std::cout);
	// diamond.attack("arthur");
	
	/*e.highFivesGuys();
	d.attack("b");
	b.takeDamage(20);
	a.attack("b");
	b.takeDamage(20);
	a.attack("b");
	d.guardGate();
	b.takeDamage(20);
	a.beRepaired(20);
	a.showStatus();
	b.showStatus();
	a.attack("b");
	b.takeDamage(20);
	a.attack("b");
	b.takeDamage(20);
	a.attack("b");
	b.takeDamage(20);
	a.attack("b");
	b.takeDamage(20);
	a.attack("b");
	b.takeDamage(20);
	a.attack("b");
	b.takeDamage(20);
	a.attack("b");
	b.takeDamage(20);
	a.attack("b");
	b.takeDamage(20);
	a.attack("b");
	b.takeDamage(20);
	a.attack("b");
	b.takeDamage(20);*/
}