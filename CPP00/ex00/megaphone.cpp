/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>
#include <string.h>

/*
**	This file contains: 1 function.
**	-	'int	main(int argc, char **argv)':	It's the main program. Checks
**		how many args are given, display an error message if it is less than
**		1 arg. Otherzise, displays all characters as uppercase. 
*/

int				main(int argc, char **argv)
{
	int			i;
	size_t			y;

	if (argc <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;

	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (y = 0; y < strlen(argv[i]); y++)
			{
				if (islower(argv[i][y]))
					std::cout << (char)toupper(argv[i][y]);
				else
					std::cout << argv[i][y];
			}
			std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}
