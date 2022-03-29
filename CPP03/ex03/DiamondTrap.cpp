/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

/*
**	DiamondTrap's default constructor
*/
DiamondTrap::DiamondTrap( void ) : ClapTrap("_clap_name", 100, 50, 30), 
								FragTrap(),
								ScavTrap(), _name("AHHHH j'en ai amrre")
{

	std::cout << "<" << this->_name << "> " << " Je suis Dieuuuuu, enfin je crois? : DIAMONDTRAP" << std::endl;
	return ;
}

/*
**	DiamondTrap's constructor
*/
DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name", 100, 50, 30),
											FragTrap(name),
											ScavTrap(name), _name(name)
{

	std::cout << "<" << this->_name << "> " <<" Deuxieme a droite, troisieme a gauche, c'est par ou le paradis? : DIAMONDTRAP" << std::endl;
	return ;
}

/*
**	DiamondTrap's destructor
*/
DiamondTrap::~DiamondTrap( void ) {

	std::cout << "Welcolme to HELL... R.I.P : DIAMONDTRAP : " << this->_name << std::endl;
	return ;
}

/*
**	DiamondTrap's copy constructor
*/
DiamondTrap::DiamondTrap( const DiamondTrap &copy ) : ClapTrap(copy) {

	std::cout << " Molo, il est dit qu'au 7eme jour, Dieu s'est repose non? : DIAMONDTRAP : " << std::endl;
	return ;
}


/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
DiamondTrap		&DiamondTrap::operator=( const DiamondTrap &element) {

	std::cout << "Euh... Il y en a combien des dieux? : DIAMONDTRAP" << std::endl;
	if (this != &element)
	{
		ClapTrap::operator=(element);
		this->_name = element._name;
	}
	return (*this);
}


/*
**	Other functions
*/
void			DiamondTrap::attack( std::string const & target ) {

	ScavTrap::attack(target);
	return ;
}

void			DiamondTrap::whoAmI( void ) {

	std::cout << "Diamond name = " << this->_name << " \tClapTrap name : " << ClapTrap::_Name << std::endl;
	return ;
}