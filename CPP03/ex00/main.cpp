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
/*
**	clang++ -Wall -Werror -Wextra -std=c++98 -o main main.cpp ClapTrap.cpp && ./main 
*/

int			main( void )
{
	ClapTrap		julie("Julie");
	ClapTrap		kleo("Kleo");

	julie.attack("Kleo");
	kleo.takeDamage(10);
	kleo.takeDamage(1000);
	kleo.takeDamage(0);
	kleo.takeDamage(669);

	kleo.beRepaired(1000);
	julie.beRepaired(1000);
	julie.beRepaired(1000);
	kleo.beRepaired(1000);

	julie.attack("Salut");
	kleo.attack("l'exercice etait mieux avant");


	std::cout << std::endl;
	ClapTrap		noob;

	// std::cout << std::endl;

	// julie.meleeAttack("Kleo");
	// kleo.takeDamage(30);

	// kleo.rangedAttack("Julie");
	// julie.takeDamage(20);

	// julie.beRepaired(10);
	// kleo.beRepaired(50);
	// kleo.beRepaired(100);

	// julie.takeDamage(1000);
	// julie.beRepaired(10);


	// kleo.vaulthunter_dot_exe("Julie");
	// kleo.vaulthunter_dot_exe("Julie");
	// kleo.vaulthunter_dot_exe("Julie");
	// kleo.vaulthunter_dot_exe("Julie");
	// kleo.vaulthunter_dot_exe("Julie");
	return (0);
}