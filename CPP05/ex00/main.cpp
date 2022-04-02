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

#include <iostream>
#include "Bureaucrat.hpp"

/*
**	clang++ -Wall -Werror -Wextra -std=c++98 -o main main.cpp Bureaucrat.cpp && valgrind --leak-check=full ./main
*/

int			main( void )
{
	Bureaucrat		patrick("patrick", 5);

	std::cout << patrick << std::endl;
	patrick.incGrade();
	std::cout << patrick << std::endl;
	patrick.decGrade();
	std::cout << patrick << std::endl;

	std::cout << "Test copy constructor" << std::endl;
	Bureaucrat		test_copy = patrick;
	std::cout << test_copy << std::endl;
	test_copy.incGrade();
	std::cout << test_copy << std::endl;
	std::cout << patrick << std::endl;
	std::cout << "Test assignment operator" << std::endl;
	Bureaucrat		test_assignment("Moi", 45);
	std::cout << test_assignment << std::endl;
	test_assignment = patrick;
	std::cout << test_assignment << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	Bureaucrat		sebastien("sebastien", 1);
	try
	{
		sebastien.decGrade();
		std::cout << sebastien << std::endl;
		sebastien.incGrade();
		std::cout << sebastien << std::endl;
		sebastien.incGrade();
		std::cout << sebastien << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << sebastien << std::endl;

	std::cout << std::endl;
	Bureaucrat		dominique("dominique", 150);
	try
	{
		dominique.incGrade();
		std::cout << dominique << std::endl;
		dominique.incGrade();
		std::cout << dominique << std::endl;
		dominique.decGrade();
		std::cout << dominique << std::endl;
		dominique.decGrade();
		std::cout << dominique << std::endl;
		dominique.decGrade();
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << dominique << std::endl;

	std::cout << std::endl;
	try
	{
		// without try == abort core dumped
		Bureaucrat		bigboss("bigboss", -5);
		Bureaucrat		student("student", 300);
	}
	catch( std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	try
	{
		// without try == abort core dumped
		Bureaucrat		student("student", 300);
	}
	catch( std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << std::endl;
	return (0);
}