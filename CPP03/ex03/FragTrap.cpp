/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
**	FragTrap's default constructor
*/
FragTrap::FragTrap( void ) : ClapTrap("NULL", 100, 100, 30) 
{

	std::cout << "<" << this->_Name << "> " << " De retour ...! FRAGTRAP" << std::endl;
	return ;
}

/*
**	FragTrap's constructor
*/
FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30)
{

	std::cout << "<" << this->_Name << "> " <<" Pour vous jouer un mauvais tour? FRAGTRAP" << std::endl;
	return ;
}

/*
**	FragTrap's destructor
*/
FragTrap::~FragTrap( void ) {

	std::cout << " BANG tu es mort: FRAGTRAP" << this->_Name << std::endl;
	return ;
}

/*
**	FragTrap's copy constructor
*/
FragTrap::FragTrap( const FragTrap &copy ) : ClapTrap(copy) {

	std::cout << "Encore du Travail? FRAGTRAP" << std::endl;
	return ;
}


/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
FragTrap		&FragTrap::operator=( const FragTrap &element) {

	std::cout << "Vous n'avez personne d'autre? FRAGTRAP" << std::endl;
	if (this != &element)
	{
		ClapTrap::operator=(element);
	}
	return (*this);
}


/*	***********************	*/
/*	Public member's methods	*/
/*	***********************	*/

void			FragTrap::highFivesGuys( void ) const {

	std::cout << this->_Name << " says: Hey dude! HIGH FIVE!!" << std::endl;
	std::cout << "BAM" << std::endl;
	return ;
}