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
#include "Intern.hpp"

/*
**	clang++ -Wall -Werror -Wextra -std=c++98 -o main main.cpp Bureaucrat.cpp Form.cpp  PresidentialPardonForm.cpp RobotomyRequestForm.cpp ShrubberyCreationForm.cpp && ./main
*/

int			main( void )
{
	std::cout << std::endl;
	std::cout << std::endl;
	Form		*test;
	Form		*test1;
	Form		*test2;
	Intern		peck;


	try
	{
		test = peck.makeForm("truc", "Bender");
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	test = peck.makeForm("robotomy request", "Bender");
	std::cout << std::endl;
	test1 = peck.makeForm("presidential pardon", "PAtrick");
	std::cout << std::endl;
	test2 = peck.makeForm("shrubbery creation", "Sebastien");

	std::cout << std::endl;
	Bureaucrat	bur("bur", 1);
	bur.signForm(*test2);
	bur.executeForm(*test2);

	bur.executeForm(*test1);

	std::cout << std::endl;
	delete test;
	delete test1;
	delete test2;
	return (0);
}