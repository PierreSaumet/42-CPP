/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/*	**************************
**	Rules of three in C++
**		1) Constructor
**		2) Copy constructor
**		3) Destructor
**	+ copy assignment operator
**	**************************	*/

/*
**	HumanA's constructor
*/
HumanA::HumanA( std::string name, Weapon &weapon) : _name(name), _weapon(weapon) {

	return ;
}

/*
**	HumanA's copy constructor
*/
HumanA::HumanA( const HumanA &copy ) : _name(copy._name), _weapon(copy._weapon) {

	return ;
}

/*
**	HumanA's destructor
*/
HumanA::~HumanA( void ) {

	return ;
}

/*
**	HumanA's copy assignment operator
*/
HumanA &HumanA::operator=( const HumanA &element ) {

	if (this != &element)
	{
		this->_name = element._name;
		this->_weapon = element._weapon;
	}
	return (*this);
}


/*	*********************************
**	Other functions of HumanA's class
**	*********************************	*/

/*
**	void	attack ( void );
**		Display a sentence with the 2 private variables
**		_name and _weapon.type()
*/
void			HumanA::attack ( void ) {

	std::cout << this->_name << " attacks with his/her " << this->_weapon.getType() << std::endl;
	return ;
}