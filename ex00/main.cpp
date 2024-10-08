/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:23:55 by emimenza          #+#    #+#             */
/*   Updated: 2024/06/26 11:21:12 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/ClapTrap.hpp"

int main(void)
{
	//ClapTrap	a("Arthur");
	ClapTrap	b("Dutch");
	//ClapTrap	c(b);
	//ClapTrap	d = a;

	//std::cout << a << std::endl;
	std::cout << b << std::endl;
	b.takeDamage(3);
	std::cout << b << std::endl;
	b.takeDamage(20);
	std::cout << b << std::endl;
	b.beRepaired(3);
	std::cout << b << std::endl;
	// b.attack("Eric");
	// b.attack("Eric");
	// std::cout << b << std::endl;
	// b.attack("Eric");
	// std::cout << b << std::endl;
	// b.beRepaired(6);
	// std::cout << b << std::endl;
	// b.attack("Eric");
}
