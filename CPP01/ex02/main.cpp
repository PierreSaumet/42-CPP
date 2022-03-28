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

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

/*
**  clang++ -Wall -Werror -Wextra -std=c++98 -o main main.cpp Zombie.cpp ZombieEvent.cpp && ./main
*/

int         main()
{
	std::cout << std::endl;
    Zombie      Zombie1("Pierre", "Zombie's Prince");
    Zombie1.announce();

    std::cout << std::endl;
    Zombie      *Zombie2 = new Zombie("Patrick", "Zombie's Cooker");
    Zombie2->announce();

    std::cout << std::endl;
    Zombie      *Zombie3;
    ZombieEvent event;
    Zombie3 = event.newZombie("Turboooooo");
    Zombie3->announce();
	delete (Zombie3);

    std::cout << std::endl;
    event.setZombieType("Soldier");
	Zombie3 = event.newZombie("Turboooooo");
    Zombie3->announce();

    std::cout << std::endl;
    Zombie      *Zombie4;
    Zombie4 = event.newZombie("Rayan");
    Zombie4->announce();

    std::cout << std::endl;
	std::cout << std::endl;
	Zombie		*Zombie5;
	Zombie5 = event.randomChump();

	std::cout << std::endl;
	Zombie		Zombie6("Jean", "Zombie's legend");
	Zombie6.announce();

    std::cout << std::endl;
	Zombie		*Zombie7;
	event.setZombieType("Perfect zombie");
	Zombie7 = event.randomChump();

	std::cout << std::endl;
	std::cout << "Number of Zombie created: " << Zombie::getNbInst() << std::endl;
	std::cout << std::endl;
	delete (Zombie2);
	delete (Zombie3);
	delete (Zombie4);
	delete (Zombie5);
	delete (Zombie7);
    return (0);
}