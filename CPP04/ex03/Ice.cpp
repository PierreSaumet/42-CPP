/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"


/*
**	Ice's default constructor
*/
Ice::Ice( void ) : AMateria("ice") {
	
	return ;
}

/*
**	Ice's destructor
*/
Ice::~Ice( void ) {

	return ;
}

/*
**	Ice's copy constructor
*/
Ice::Ice( const Ice &copy ) : AMateria(copy) {

	return ;
}


/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
Ice			&Ice::operator=( const Ice &element) {

	if (this != &element)
	{
		AMateria::operator=(element);
	}
	return (*this);
}



/*	*******************	*/
/*	Other functions 	*/
/*	*******************	*/

AMateria		*Ice::clone( void ) const {

	return (new Ice(*this));
}

void			Ice::use( ICharacter &target ) {

	std::cout << "* shouts an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
	return ;
}