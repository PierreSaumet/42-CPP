/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/*	**************************
**	Rules of three in C++
**		1) Constructor
**		2) Copy constructor
**		3) Destructor
**	+ default constructor
**	+ copy assignment operator
**	**************************	*/

/*
**	Weapon's default constructor
*/
Weapon::Weapon( void ) {

	return ;
}

/*
**	Weapon's constructor
*/
Weapon::Weapon( std::string type) {

	_type = type;
	return ;
}

/*
**	Weapon's copy constructor
*/
Weapon::Weapon( const Weapon &copy ) {
	
	_type = copy._type;
	return ; 
}

/*
**	Weapon's destructor
*/
Weapon::~Weapon ( void ) {

	return ;
}

/*
**	Weapon's copy assignment operator
*/
Weapon &Weapon::operator=( const Weapon &element ) {

	if (this != &element)
	{
		this->_type = element._type;
	}
	return (*this);
}

/*	*********************************
**	Other functions of Weapon's class
**	*********************************	*/

/*
**	const std::string	getType( void );
**		return the content of the private variable  _type
*/
const std::string		Weapon::getType( void ) {

	return (this->_type);
}


/*
**	void	setType( const std::string type );
**		setup the private variable with the given argument
*/
void					Weapon::setType( const std::string type ) {

	this->_type = type;
	return ;
}