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

#include "Array.hpp"

int			main(void)
{
	Array<int>	integer_void;
	std::cout << integer_void.size() << std::endl;

	Array<int> integer(10);
	std::cout << integer.size() << std::endl;

	std::cout << "Test copy assignment :" << std::endl;
	integer_void = integer;
	for (int i = 0; i < integer_void.size(); i++)
	{
		integer_void[i] = i;
		std::cout << integer_void[i] << " ";
	}
	std::cout << std::endl;

	std::cout << "Test copy constructor:" << std::endl;
	Array<int> copy_constructor = integer;
	for (int i = 0; i < copy_constructor.size(); i++)
	{
		copy_constructor[i] = i;
		std::cout << copy_constructor[i] << " ";
	}

	std::cout << std::endl;
	std::cout << "Display integer: " << std::endl;
	for (int i = 0; i < integer.size(); i++)
	{
		std::cout << integer[i] << " ";
	}
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Test float :" << std::endl;
	Array<float> floater(16);
	for (int i = 0; i < floater.size(); i++)
	{
		std::cout << floater[i] << "f "; 
	}
	std::cout << std::endl;
	std::cout << std::endl;

	Array<std::string> stringer(6);
	for (int i = 0; i < stringer.size(); i++)
	{
		std::cout << stringer[i] << "s -";
		stringer[i] = std::to_string(i);
		std::cout << stringer[i] << " S - ";
	}
	std::cout << std::endl;

	Array<std::string> stringer_bis = stringer;
	for (int i = 0; i < stringer_bis.size(); i++)
		stringer_bis[i] = "test " + std::to_string(i);
	for (int i = 0; i < stringer.size(); i++)
		std::cout << stringer[i] << "- VS -" << stringer_bis[i] << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	try
	{
		std::cout << "Test error 1: ";
		integer[-1] = 22;
	}
	catch ( const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << "Test error 2: ";
		integer[95] = 23;
	}
	catch ( const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::cout << "Test error 3: ";
		Array<std::string> test(3);
		test[0] = "Pierre";
		std::cout << test[0] << std::endl;
		test[9] = "Claude";
	}
	catch ( const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}


	
	std::cout << std::endl;
	std::cout << "Test non const : " << std::endl; 
	Array<int> non_const(3);
	std::cout << "Can Write ... " << std::endl; 
	non_const[0] = 3;				
	non_const[1] = 33;
	non_const[2] = 33;
	std::cout << "Can Read ... " << std::endl;
	std::cout << non_const[1] << std::endl;
	

	std::cout << std::endl;
	std::cout << "Test const : " << std::endl; 
	Array<int> const cont_int(3);
	std::cout << "Can Read ... " << std::endl;
	int alors = cont_int[1];
	std::cout << "alors = " << alors << std::endl;
	// IMPOSSIVBLE
// 	cont_int[0] = 42;
	

	return (0);
}