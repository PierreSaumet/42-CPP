/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


/*
**	ScavTrap's default constructor
*/
ScavTrap::ScavTrap( void ) : ClapTrap("RELOU", 100, 50, 20) {

	std::cout << "<" << this->_Name << "> " <<" Lok'tar ogar ! : ScavTRAP " << std::endl;
	return ;
}

/*
**	ScavTrap's constructor
*/
ScavTrap::ScavTrap( std::string name ) :  ClapTrap(name, 100, 50, 20) {

	std::cout << "<" << this->_Name << "> " <<" Mes lames sont à vos ordres. : ScavTRAP " << std::endl;
	srand(time(NULL));
	return ;
}

/*
**	ScavTrap's destructor
*/
ScavTrap::~ScavTrap( void ) {

	std::cout << "C'est parti!! bye : ScavTRAP : " << this->_Name << std::endl;
	return ;
}

/*
**	ScavTrap's copy constructor
*/
ScavTrap::ScavTrap( const ScavTrap &copy ) : ClapTrap(copy) {

	std::cout << "Prêt à l'action ! : ScavTRAP " << std::endl;

	return ;
}


/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
ScavTrap		&ScavTrap::operator=( const ScavTrap &element) {

	std::cout << "Je te tiens, tu me tiens, par la barbichette ... : ScavTRAP " << std::endl;
	if (this != &element)
	{
		ClapTrap::operator=(element);
	}
	return (*this);
}


/*	***********************	*/
/*	Public member's methods	*/
/*	***********************	*/

void		ScavTrap::guardGate( void ) const {

	std::cout << this->_Name << " ScavTrap have entered in Gate keeper mode... " << std::endl;
	return ;
}


void		ScavTrap::attack( std::string const & target ) {

	std::cout << "ScavTrap <" << this->_Name << "> (" << this->_Hitpoints << ") attacks <" << target << ">, causing <" << this->_Attack_damage << "> points of damage !" << std::endl;
	return ;
}

void		ScavTrap::takeDamage( unsigned int amount ) {

	std::cout << "ScavTrap <" << this->_Name << "> receive: " << amount << " points of damage" << std::endl;
	return ;
}

void		ScavTrap::beRepaired( unsigned int amount ) {

	std::cout << "ScavTrap <" << this->_Name << "> (" << this->_Hitpoints << ") heals of: " << amount << " points of health" << std::endl;
	return ;
}

