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

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

/*
**	clang++  -std=c++98 -o main main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp && ./main
*/

int		main( void )
{

	IMateriaSource* src = new MateriaSource();
	ICharacter* patrick = new Character("patrick");
    ICharacter* me = new Character("me");
    AMateria* tmp = NULL;

	src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    tmp = src->createMateria("ice");
	me->unequip(3);
	me->unequip(-3);
	me->unequip(33);
    me->equip(tmp);
    std::cout << "doit etre ice = " << tmp->getType() << " and ";
	me->use(0, *me);
	std::cout << std::endl;
	std::cout << " nothing = ";
	me->use(1, *me);
	std::cout << std::endl;
	std::cout << std::endl;

    tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << "doit etre cure = " << tmp->getType() << " and ";
	me->use(1, *patrick);
	std::cout << std::endl;
	std::cout << std::endl;


    me->use(0, *patrick);
    me->use(1, *patrick);
	me->use(2, *patrick);

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << " me use ... : " << std::endl;
	std::cout << "me 0 = " << std::endl; 
	me->use(0, *patrick);
	std::cout << "me 1 = " << std::endl;
	me->use(1, *patrick);
	std::cout << "me 2 = " << std::endl;
	me->use(2, *patrick);
	std::cout << "me 3 = " << std::endl;
	me->use(3, *patrick);
	std::cout << std::endl;
	std::cout << std::endl;
	tmp = src->createMateria("ice");
    me->equip(tmp);
    std::cout << "doit etre ice = " << tmp->getType()  << std::endl;
	tmp = src->createMateria("cure");
    me->equip(tmp);
    std::cout << "doit etre cure = " << tmp->getType() << std::endl;
	me->use(-1, *patrick);
	me->use(5, *patrick);
	std::cout << "me 0 = " << std::endl; 
	me->use(0, *patrick);
	std::cout << "me 1 = " << std::endl;
	me->use(1, *patrick);
	std::cout << "me 2 = " << std::endl;
	me->use(2, *patrick);
	std::cout << "me 3 = " << std::endl;
	me->use(3, *patrick);

	std::cout << std::endl;
	std::cout << "me 3 = " << std::endl;
	me->unequip(3);
	me->unequip(2);
	me->unequip(1);
	std::cout << " test" << std::endl;
	me->use(3, *patrick);

    delete patrick;
    delete me;
    delete src;

	std::cout << std::endl;
	std::cout << std::endl;
	Character	test1("test1"), test2("test2");
	std::cout << "N1 = " << test1.getName() << std::endl;
	std::cout << "N2 = " << test2.getName() << std::endl;
	std::cout << std::endl;
	test2 = test1;
	std::cout << std::endl;
	std::cout << "N1 = " << test1.getName() << std::endl;
	std::cout << "N2 = " << test2.getName() << std::endl;
	std::cout << std::endl;
	Character test3 = test1;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "N3 = " << test3.getName() << std::endl;
	std::cout << "N1 = " << test1.getName() << std::endl;
	return (0);
}