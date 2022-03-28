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

#include "Human.hpp"

/*
**	clang++ -Wall -Werror -Wextra -std=c++98 -o main main.cpp Human.cpp && ./main
*/

int			main(void)
{
	Human	test;

	test.action("melee", "Tanguy");
	test.action("range", "Renaud");
	test.action("intimidate", "Chloe");

	std::cout << std::endl;
	test.action("error", "error");
	test.action("", "");
	return (0);
}