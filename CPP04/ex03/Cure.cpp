/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"


/*
**	Cure's default constructor
*/
Cure::Cure( void ) : AMateria("cure") {
	
	return ;
}

/*
**	Cure's destructor
*/
Cure::~Cure( void ) {

	return ;
}

/*
**	Cure's copy constructor
*/
Cure::Cure( const Cure &copy ) : AMateria("cure") {

	operator=(copy);
	return ;
}


/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
Cure			&Cure::operator=( const Cure &element) {

	if (this != &element)
	{
		AMateria::operator=(element);
	}
	return (*this);
}



/*	*******************	*/
/*	Other functions 	*/
/*	*******************	*/

AMateria		*Cure::clone( void ) const {

	return (new Cure(*this));
}

void			Cure::use( ICharacter &target ) {

	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}