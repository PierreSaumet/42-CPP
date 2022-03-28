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

#include "ClassPhonebook.hpp"
#include <sstream>
/*
**	This file contains 4 functions:
**		-'int	ft_add(Phonebook instance[8])':		Add a new instance of
**		Phonebook's class. Checks if it was setup or not.
**		-'int	ft_search(Phonebook instance[8])':	Displays the memorized contacts.
**		asks user to display more information about the choosen contact.
**		-'int	ft_display_menu( void )':			Main loop, ask user and return
**		the associated int.
**		-'int	main(void)':						Uses the return of ft_display_menu
**			and run the associated function.
*/
int				ft_add(Phonebook instance[8])
{
	int			i;

	i = 0;
	while (instance[i].ret_is_setup() && i < 8)
		i++;
	if (i >= 8)
	{
		std::cout << "Not enougth place for adding a contact, return menu." << std::endl;
		return (0);
	}
	instance[i].ft_add_contact();
	std::cout << std::endl;
	return (0);
}

int				ft_search(Phonebook instance[8])
{
	int			i;
	std::string	input;
	std::string val_first_name;
	std::string val_last_name;
	std::string val_nickname;

	std::cout.width(10); std::cout << std::right << "index" << "|";
	std::cout.width(10); std::cout << std::right << "first name" << "|";
	std::cout.width(10); std::cout << std::right << "last name" << "|";
	std::cout.width(10); std::cout << std::right << "nickname" << std::endl;
	std::cout << "----------|----------|----------|----------" << std::endl;

	i = 0;
	while (instance[i].ret_is_setup() && i < 8)
	{
		val_first_name = instance[i].get_first_name();
		if (val_first_name.length() > 10)
			val_first_name.replace(9, 1, ".");
		val_last_name = instance[i].get_last_name();
		if (val_last_name.length() > 10)
			val_last_name.replace(9, 1, ".");
		val_nickname = instance[i].get_nickname();
		if (val_nickname.length() > 10)
			val_nickname.replace(9, 1, ".");

		std::cout.width(10); std::cout << std::right << i + 1 << "|";
		std::cout.width(10); std::cout << std::right << val_first_name.substr(0, 10) << "|";
		std::cout.width(10); std::cout << std::right << val_last_name.substr(0, 10) << "|";
		std::cout.width(10); std::cout << std::right << val_nickname.substr(0, 10);;
		std::cout << std::endl;		
		i++;
	}
	if (i > 0)
	{
		std::cout << "Choose an index to display the informations between: " << "1 and " << i << " : ";
		std::getline(std::cin, input);
		if (input.length() != 1 || (input.length() == 1 && !isdigit(input[0])))
		{
			std::cout << "Not available, return main menu." << std::endl;
			return (0);
		}
		if (std::atoi(input.c_str()) >= 1 && std::atoi(input.c_str()) <= i && input.length() == 1)
			instance[std::atoi(input.c_str()) - 1].ft_display_contacts();
		else
			std::cout << "Not available, return main menu." << std::endl;
	}
	return (0);
}

int			ft_display_menu( void )
{
	std::string		input;
	
	std::cout << "Please, enter your command (ADD or SEARCH or EXIT): ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return (-1);
	if (!(input.compare("ADD")))
		return (2);
	if (!(input.compare("SEARCH")))
		return (3);
	if (!(input.compare("EXIT")))
		return (-1);
	return (0);	
}

int             main(void)
{
	Phonebook	instance[8];
	int				ret;

	ret = 0;
	std::cout << "*********************************" << std::endl;
	std::cout << "*-* Welcome to your PhoneBook *-*" << std::endl;
	std::cout << "*********************************" << std::endl;
	std::cout << std::endl;
	while (1)
	{
		if (ret == 0)
			ret = ft_display_menu();
		else if (ret == 2)
			ret = ft_add(instance);
		else if (ret == 3)
			ret = ft_search(instance);
		else if (ret == -1)
		{
			std::cout << "Thank you, Goodbye!" << std::endl;
			exit(EXIT_SUCCESS);
		}
	}
	return (0);
}
