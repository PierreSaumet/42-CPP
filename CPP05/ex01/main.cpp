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
#include "Form.hpp"

/*
**	clang++ -Wall -Werror -Wextra -std=c++98 -o main main.cpp Bureaucrat.cpp Form.cpp && ./main
*/

int			main( void )
{
	Bureaucrat		patrick("Random Bureaucrat", 75);

	Form			low_paper("low_paper", 100, 100);

	std::cout << low_paper << std::endl;
	try
	{
		low_paper.beSigned(patrick);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << low_paper << std::endl;
	try
	{
		patrick.signForm(low_paper);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << low_paper << std::endl;
	std::cout << std::endl;

	Form			high_paper("high_paper", 20, 20);
	std::cout << high_paper << std::endl;
	try
	{
		high_paper.beSigned(patrick);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << high_paper << std::endl;


	try
	{
		Form	big_form("big", 500, 50);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form	big_form("big", 50, 500);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form	big_form("big", 50, 0);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form	big_form("big", 0, 50);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	// try
	// {
	// 	std::cout << test1 << std::endl;
	// 	test1.beSigned(patrick);
	// 	std::cout << test1 << std::endl;
	// 	test1.beSigned(patrick);
	// 	std::cout << test1 << std::endl;
	// }
	// catch(std:: exception &e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	
	return (0);
}