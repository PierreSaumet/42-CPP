/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
**  clang++ -Wall -Werror -Wextra -std=c++98 -o ex01 ex01.cpp && valgrind ./ex01
*/

void        memoryLeak()
{
    std::string*    panthere = new std::string("String panthere");

    std::cout << *panthere << std::endl;
    delete (panthere);
}


int     main()
{
    memoryLeak();
    return (0);
}