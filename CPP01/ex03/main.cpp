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
#include "ZombieHorde.hpp"

/*
**  clang++ -Wall -Werror -Wextra -std=c++98 -o main main.cpp Zombie.cpp ZombieHorde.cpp && ./main
*/

int			main()
{
	ZombieHorde		walking_dead(5);
	walking_dead.announce();
	std::cout << std::endl;

	ZombieHorde		error(-9);
	error.announce();
	std::cout << std::endl;
	return (0);
}