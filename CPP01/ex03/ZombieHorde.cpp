/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

/*
**	ZombieHorde's constructor
*/
ZombieHorde::ZombieHorde( int n ) {

	std::string	name[8] = {"Mathilde", "Pauline", "Lena", "Johanna", "Paul", "Abdel", "Marion", "Coock"};
	int			rand_nbr;

	if (n <= 0 || n >= 2147483647)
	{
		std::cout << "Number invalid, set to 1" << std::endl;
		n = 1;
	}

	this->_nbr_zombies = n;
	this->_zombies = new Zombie[n];
	srand(time(NULL));

	for (int i = 0; i < n; i++)
	{
		rand_nbr = rand() % 7 + 1;
		this->_zombies[i].set_name(name[rand_nbr]);
	}
	
	return ;
}

/*
**	ZombieHorde's copy constructor
*/
ZombieHorde::ZombieHorde( const ZombieHorde &copy ) {

	std::cout << "ZombieHorde's copy constructor is initialized!" << std::endl;
	_nbr_zombies = copy._nbr_zombies;;
	_zombies = copy._zombies;
	return ;
}

/*
**  ZombieHorde's destructor
*/
ZombieHorde::~ZombieHorde( void )
{
	delete [] _zombies;
    return ;
}

/*
**  ZombieHHorde's copy of assignement
*/
ZombieHorde &ZombieHorde::operator=( const ZombieHorde &element )
{
	if (this != &element)
		return (*this);
	this->_zombies = element._zombies;
	this->_nbr_zombies = element._nbr_zombies;
	return (*this);
}


/* ******************************** */
/*  ZombieHorde's Public functions  */
/* ******************************** */

/*
**	Announce all created zombies.
*/
void			ZombieHorde::announce( void ) {

	int			i;

	for (i = 0; i < this->_nbr_zombies; i++)
	{
		_zombies[i].announce();
	}
}