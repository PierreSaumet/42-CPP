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

/*
**	clang++ -Wall -Werror -Wextra -std=c++98 -o main main.cpp ClapTrap.cpp ScavTrap.cpp && ./main 
*/

int			main( void )
{
	// relou de changer les sujets...

	ScavTrap		kek;
	ScavTrap		bur("bur");

	bur.guardGate();
	kek.guardGate();

	std::cout << std::endl;
	std::cout << std::endl;
	bur.attack("PIERRE");
	kek.attack("SAUMET");

	std::cout << std::endl;
	ClapTrap		*grrr = new ClapTrap("test", 0, 0, 0);
	grrr->attack("SUICIDE");

	std::cout << std::endl;
	bur.takeDamage(30);
	bur.takeDamage(1000);

	std::cout << std::endl;
	kek.beRepaired(666);


	delete grrr;

	return (0);
}