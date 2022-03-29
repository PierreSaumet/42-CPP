/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"
/*
**	clang++ -Wall -Werror -Wextra -std=c++98 -o main main.cpp ClapTrap.cpp ScavTrap.cpp && ./main 
*/

int			main( void )
{
	// relou de changer les sujets...

	DiamondTrap		relou("GOD");

	// relou.attack("mon ego");
	// relou.highFivesGuys();
	// relou.guardGate();
	// relou.takeDamage(1000);
	// relou.beRepaired(10);

	relou.whoAmI();

	std::cout << std::endl;

	return (0);
}