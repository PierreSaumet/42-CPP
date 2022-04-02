/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Psaumet <psaumet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:41:51 by Psaumet           #+#    #+#             */
/*   Updated: 2021/07/04 14:24:46 by Psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

#include "easyfind.hpp"

/*
**	clang++ -Wall -Werror -Wextra -o easyfind main.cpp && ./easyfind
*/

int			main( void )
{
	int					my_ints_1[] = {1, 2, 3, 4, 5};
	std::list<int>		my_list_1( my_ints_1, my_ints_1+5);

	std::cout << "First test with list of 5 ints: " << std::endl;
	try
	{
		std::cout << "Try to find 1: " << easyfind(my_list_1, 1) << std::endl;
		std::cout << "Try to find 3: " << easyfind(my_list_1, 3) << std::endl;
		std::cout << "Try to find 5: " << easyfind(my_list_1, 5) << std::endl;
	}
	catch( const std::exception &e)
	{
		std::cerr << "Exception :: not find" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Second test with list of 5 ints: " << std::endl;
	try
	{
		std::cout << "Try to find -1: " << easyfind(my_list_1, -1) << std::endl;
	}
	catch( const std::exception &e)
	{
		std::cerr << "Exception :: not find" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Thrid test with list of 5 ints: " << std::endl;
	try
	{
		std::cout << "Try to find 99: " << easyfind(my_list_1, 99) << std::endl;
	}
	catch( const std::exception &e)
	{
		std::cerr << "Exception :: not find" << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;
	

	std::vector<int>		my_vect_1(my_ints_1, my_ints_1+5);
	std::cout << "First test with list of 5 vector int: " << std::endl;
	try
	{
		std::cout << "Try to find 1: " << easyfind(my_vect_1, 1) << std::endl;
		std::cout << "Try to find 3: " << easyfind(my_vect_1, 3) << std::endl;
		std::cout << "Try to find 5: " << easyfind(my_vect_1, 5) << std::endl;
	}
	catch( const std::exception &e)
	{
		std::cerr << "Exception :: not find" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Second test with list of 5 vector int: " << std::endl;
	try
	{
		std::cout << "Try to find -1: " << easyfind(my_vect_1, -1) << std::endl;
	}
	catch( const std::exception &e)
	{
		std::cerr << "Exception :: not find" << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Thrid test with list of 5 vector int: " << std::endl;
	try
	{
		std::cout << "Try to find 99: " << easyfind(my_vect_1, 99) << std::endl;
	}
	catch( const std::exception &e)
	{
		std::cerr << "Exception :: not find" << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;


	std::list<int>	empty;
	std::cout << "First test with a empty list of int: " << std::endl;
	try
	{
		std::cout << "Try to find 99: " << easyfind(empty, 42) << std::endl;
	}
	catch( const std::exception &e)
	{
		std::cerr << "Exception :: not find" << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;




}