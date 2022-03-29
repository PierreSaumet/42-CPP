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
/*
**	clang++ -Wall -Werror -Wextra -std=c++98 -o main main.cpp ClapTrap.cpp ScavTrap.cpp && ./main 
*/

int			main( void )
{
	// relou de changer les sujets...

	FragTrap		julie("Julie");
	FragTrap		kleo("Kleo");
	std::cout << std::endl;

	julie.attack("Kleo");
	kleo.takeDamage(30);

	kleo.attack("Julie");
	julie.takeDamage(20);

	julie.beRepaired(10);
	kleo.beRepaired(50);
	kleo.beRepaired(100);

	julie.takeDamage(1000);
	julie.beRepaired(10);

	kleo.highFivesGuys();

	std::cout << std::endl;

	ScavTrap patrick("Patrick");
	patrick.attack("Patrick");
	patrick.takeDamage(30);

	patrick.attack("Patrick");
	patrick.takeDamage(20);

	patrick.beRepaired(10);
	patrick.beRepaired(100);

	patrick.takeDamage(1000);
	patrick.beRepaired(10);

	patrick.guardGate();
	patrick.guardGate();

	std::cout << std::endl;

	ClapTrap		test_clap;

	test_clap.attack("Patrick");

	std::cout << std::endl;

	return (0);
}