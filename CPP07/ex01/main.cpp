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

#include "iter.hpp"


int			main( void ) {

	int		integer[3] = {1, 2, 3};
	iter(integer, 3, &ft_display);
	std::cout << std::endl;

	float	floater[3] = {1.2f, 3.4f, 5.6f};
	iter(floater, 3, &ft_display);
	std::cout << std::endl;

	double	doubler[3] = {7.88, 9.10, -11.11};
	iter(doubler, 3, &ft_display);
	std::cout << std::endl;

	bool	booler[3] = { true, false, true};
	iter(booler, 3, &ft_display);
	std::cout << std::endl;

	std::string	stringer[3] = {"coucou je suis une phrase", "ah bon tu es sur?", "Et moi aussi je suis une phrase"};
	iter(stringer, 3, &ft_display);
	std::cout << std::endl;
	return (0);
}