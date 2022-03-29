/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
**	ClapTrap's default constructor
*/
ClapTrap::ClapTrap( void ) : _Name("RELOU"), _Hitpoints(10), _Energy_points(10),
		_Attack_damage(0)  {

	std::cout << "Pret a travailler!: un ClapTrap s'est cree: " << this->_Name << std::endl;
	return ;
}

/*
**	ClapTrap's constructor
*/
ClapTrap::ClapTrap( std::string name, unsigned int hit_pts, unsigned int energy, unsigned int attack) :
	 _Name(name), _Hitpoints(hit_pts), _Energy_points(energy), _Attack_damage(attack) 
{
	std::cout << "Oui messire?: un ClapTrap s'est cree: " << this->_Name << std::endl;
	return ;
}

/*
**	ClapTrap's destructor
*/
ClapTrap::~ClapTrap( void ) {

	std::cout << "Travail termine... R.I.P: : un ClapTrap est detruit: " << this->_Name << std::endl;
	return ;
}

/*
**	ClapTrap's copy constructor
*/
ClapTrap::ClapTrap( const ClapTrap &copy ) {

	std::cout << "Encore du Travail? : un ClapTrap s'est cree." << std::endl;
	this->_Name = copy._Name;
	this->_Hitpoints = copy._Hitpoints;
	this->_Energy_points = copy._Energy_points;
	this->_Attack_damage = copy._Attack_damage;
	return ;
}


/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
ClapTrap		&ClapTrap::operator=( const ClapTrap &element) {

	std::cout << "Vous n'avez personne d'autre?: : un ClapTrap s'est cree." << std::endl;
	if (this != &element)
	{
		this->_Name = element._Name;
		this->_Hitpoints = element._Hitpoints;
		this->_Energy_points = element._Energy_points;
		this->_Attack_damage = element._Attack_damage;
	}
	return (*this);
}


/*	***********************	*/
/*	Public member's methods	*/
/*	***********************	*/


void		ClapTrap::attack( std::string const & target ) {

	std::cout << "ClapTrap <" << this->_Name << "> (" << this->_Hitpoints << ") attacks <" << target << ">, causing <" << this->_Attack_damage << "> points de damage !" << std::endl;
	return ;
}

void		ClapTrap::takeDamage( unsigned int amount ) {

	std::cout << "ClapTrap <" << this->_Name << "> receive: " << amount << " points de damage" << std::endl;
	return ;
}

void		ClapTrap::beRepaired( unsigned int amount ) {

	std::cout << "ClapTrap-TP <" << this->_Name << "> (" << this->_Hitpoints << ") heals of: " << amount << " points de vie" << std::endl;
	return ;
}

