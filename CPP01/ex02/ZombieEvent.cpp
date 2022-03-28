/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

/*
**  ZombieEvent's constructor
*/
ZombieEvent::ZombieEvent( void )
{
	srand(time(NULL));
    return ;
}

/*
**  Zombie's copy constructor
*/
ZombieEvent::ZombieEvent( const ZombieEvent &copy )
{
    std::cout << "ZombieEvent's copy constructor is initialized!" << std::endl;
    _type = copy._type;
	srand(time(NULL));
    return ;
}

/*
**  ZombieEvent's destructor
*/
ZombieEvent::~ZombieEvent( void )
{
    return ;
}

/*
**  ZombieEvent's copy of assignement
*/
ZombieEvent &ZombieEvent::operator=( const ZombieEvent &element )
{
	std::cout << "Operator assignement : " << &element << std::endl;
	srand(time(NULL));
	return (*this);
}

/* ******************************** */
/*  ZombieEvent's Public functions  */
/* ******************************** */

/*
**	Set the type of the Zomnbie
*/
void        ZombieEvent::setZombieType( const std::string type)
{
    this->_type = type;
}

/*
**	Creates a new zombie with the current type
*/
Zombie * ZombieEvent::newZombie( std::string name )
{
    return (new Zombie(name, this->_type));
}

/*
**	Creates a new zombie with a random name and annouce it
*/
Zombie * ZombieEvent::randomChump( void )
{
	Zombie		*new_zombie;
	std::string	name[8] = {"Mathilde", "Pauline", "Lena", "Johanna", "Marie", "Violaine", "Marion", "Laurianne"};
	int			rand_nbr;

	rand_nbr = rand() % 7 + 1;
	new_zombie = newZombie(name[rand_nbr]);
	rand_nbr = 0;
	new_zombie->announce();
	return (new_zombie);
}
