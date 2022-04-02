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
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

/*
**	clang++ -Wall -Werror -Wextra -std=c++98 -o main main.cpp Bureaucrat.cpp Form.cpp  PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp && ./main
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
	
	std::cout << std::endl;
	Bureaucrat		big_boss("big_boss", 1);

	PresidentialPardonForm	pardon_papier("pardon_paper");

	big_boss.executeForm(pardon_papier);
	big_boss.signForm(pardon_papier);
	big_boss.signForm(pardon_papier);
	big_boss.executeForm(pardon_papier);


	std::cout << std::endl;

	RobotomyRequestForm		robot("robot_paper");

	big_boss.executeForm(robot);
	big_boss.signForm(robot);
	big_boss.signForm(robot);
	big_boss.executeForm(robot);


	std::cout << std::endl;
	ShrubberyCreationForm	chelou("chelou");

	big_boss.executeForm(chelou);
	big_boss.signForm(chelou);
	big_boss.signForm(chelou);
	big_boss.executeForm(chelou);


	std::cout << std::endl;
	Bureaucrat		noob("noob", 150);
	PresidentialPardonForm	noob_pardon("noob_pardon");
	RobotomyRequestForm		noob_robot("noob_robot");
	ShrubberyCreationForm	noob_chelou("nooc_chelou");

	noob.executeForm(noob_pardon);
	noob.signForm(noob_pardon);
	noob.executeForm(noob_robot);
	noob.signForm(noob_pardon);
	noob.executeForm(noob_chelou);
	noob.signForm(noob_pardon);

	std::cout << std::endl;

	big_boss.signForm(noob_pardon);
	std::cout << noob_pardon << std::endl;
	noob.executeForm(noob_pardon);
	std::cout << std::endl;

	big_boss.signForm(noob_robot);
	std::cout << noob_robot << std::endl;
	noob.executeForm(noob_robot);
	std::cout << std::endl;

	big_boss.signForm(noob_chelou);
	std::cout << noob_chelou << std::endl;
	noob.executeForm(noob_chelou);
	std::cout << std::endl;

	
	std::cout << std::endl;
	return (0);
}