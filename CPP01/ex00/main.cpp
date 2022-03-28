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

#include "Pony.hpp"

/*
**  clang++ -Wall -Werror -Wextra -std=c++98 -o main main.cpp Pony.cpp && ./main
*/

Pony        *ponyOnTheHeap(std::string name, std::string color, std::string gender,
                            int age, std::string power)
{
    Pony    *Pony_on_Heap;

    Pony_on_Heap = new Pony(name, color, gender, age, power);
    return (Pony_on_Heap);
}

Pony        ponyOnTheStack(std::string name, std::string color, std::string gender,
                            int age, std::string power)
{
    Pony    Pony(name, color, gender, age, power);

    return (Pony);
}

int         main(void)
{
    Pony    poney1 = ponyOnTheStack("patrick", "red", "no_gender", 165, "can fly in the space");
    Pony    *poney2 = ponyOnTheHeap("Jim", "blue", "female", 845, "can speak really loud!");

    poney2->fly();
    poney1.fly();

    std::cout << std::endl;
    delete (poney2);
    return (0);
}