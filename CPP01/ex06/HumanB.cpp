/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hcpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

/*	**************************
**	Rules of three in C++
**		1) Constructor
**		2) Copy constructor
**		3) Destructor
**	+ copy assignment operator
**	**************************	*/

/*
**	HumanB's constructor
*/
HumanB::HumanB( std::string name ) : _name(name), _weapon() {

	return ;	
}

/*
**	HumanB's copy constructor
*/
HumanB::HumanB( const HumanB &copy) {

	_name = copy._name;
	_weapon = copy._weapon;
	return ;
}

/*
**	HumanB's destructor
*/
HumanB::~HumanB( void ) {

	return ;
}

/*
**	HumanB's copy assignment operator
*/
HumanB &HumanB::operator=( const HumanB &element ) { 

	if (this != &element)
	{
		this->_name = element._name;
		this->_weapon = element._weapon;
	}
	return (*this);
}


/*	*********************************
**	Other functions of HumanB's class
**	*********************************	*/

/*
**	void	setWeapon( Weapon &weapon);
**		Setup the _weapon.
*/
void			HumanB::setWeapon( Weapon &weapon ) {

	this->_weapon = &weapon;
	return ;
}

/*
**	void	attack ( void );
**		Display a sentence with the 2 private variables
**		_name and _weapon.type()
*/
void			HumanB::attack( void ) {

	std::cout << this->_name << " attacks with his/her " << this->_weapon->getType() << std::endl;
	return ;
}

