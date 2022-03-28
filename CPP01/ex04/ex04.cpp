/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
/*
**  clang++ -Wall -Werror -Wextra -std=c++98 -o ex04 ex04.cpp && ./ex04
*/

int			main(void)
{
	std::string		brain_string = "HI THIS IS BRAIN";
	std::string		*ptr_brain_string = &brain_string;
	std::string		&ref_brain_string = brain_string;

	std::cout << "With pointer : " << *ptr_brain_string << std::endl;
	std::cout << "With reference : " << ref_brain_string << std::endl;
	return (0);
}