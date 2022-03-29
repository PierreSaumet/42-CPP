/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
**	Character constructor
*/
Character::Character( std::string const &name ) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
	return ;
}

/*
**	Character copy constructor
*/
Character::Character(const Character& copy)
{
	this->_name = (copy.getName());
	for (int i = 0; i < 4; i++)
	{
		if (copy._inventory[i])
			this->_inventory[i] = copy._inventory[i]->clone();
		else
			this->_inventory[i] = NULL;
	}
	return ;
}

/*
**	Characteur destructor
*/
Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
			delete this->_inventory[i];
	}
	return ;
}


/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
Character	&Character::operator=( const Character &element )
{
	if (this != &element)
	{
		this->_name = element.getName();
		for (int i = 0; i < 4; i++)
			if (this->_inventory[i])
				delete this->_inventory[i];
		for (int i = 0; i < 4; i++)
		{
			if (element._inventory[i])
				this->_inventory[i] = element._inventory[i];
			else
				this->_inventory[i] = NULL;
		}
	}
	return (*this);
}

/*
**	Getter
*/
std::string const 	&Character::getName( void ) const
{
	return (this->_name);
}

/*
**	Other functions
*/
void				Character::equip( AMateria* m)
{
	int i = 0;
	if (m == NULL)
	{
		return ;
	}
	for (i = 0; i < 4 && this->_inventory[i] != NULL; i++)
		if (this->_inventory[i] == m)
			return ;
	if (i < 4)
		this->_inventory[i] = m;
}

void				Character::unequip(int idx)
{
	if (idx < 0 || idx > 3 || this->_inventory[idx] == NULL )
	{
		return ;
	}
	for ( int i = 0; i < 4; i++)
	{
		if (i + 1 != 4 && this->_inventory[ i + 1] != NULL)
		{
			this->_inventory[i] = this->_inventory[i + 1];
			this->_inventory[i + 1] = NULL;
		}
	}
}


void				Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && this->_inventory[idx] != NULL)
		this->_inventory[idx]->use(target);
}