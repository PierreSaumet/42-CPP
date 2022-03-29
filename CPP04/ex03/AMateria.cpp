/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
**	AMateria default constructor
*/
AMateria::AMateria( void ) : _type("NULL") {

	return ;
}

/*
**	AMateria constructor
*/
AMateria::AMateria( std::string const &type ) : _type(type) {

	return ;
}

/*
**	AMateria copy constructor
*/
AMateria::AMateria(const AMateria& copy) {

	this->_type = copy.getType();
	return ;
}

/*
**	AMAteria destructor
*/
AMateria::~AMateria( void ) {

	return ;
}

/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
AMateria	&AMateria::operator=( const AMateria &element )
{
	if (this != &element)
	{
		this->_type = element.getType();
	}
	return (*this);
}

/*
**	Getter
*/
std::string const	&AMateria::getType(void) const
{
	return (this->_type);
}

/*
**	Other function
*/
void				AMateria::use(ICharacter& target)
{
	(void)target;
	return ;
}
