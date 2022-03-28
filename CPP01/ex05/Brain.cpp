/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
**	Brain's constructor
*/
Brain::Brain( void ) {

	return ;	
}

/*
**	Brain's copy constructor
*/
Brain::Brain ( const Brain &copy ) {

	_area = copy._area;
	return ;
}

/*
**	Brain's destructor
*/
Brain::~Brain ( void ) {

	return ;
}

/*
**	Brain's copy of assignment operator
*/
Brain &Brain::operator=( const Brain &element) {

	if (this != &element)
	{
		this->_area = element._area;
		return (*this);
	}
	return (*this);
}


/*
**	Others public functions:
*/
/*
**	
*/
std::string			Brain::identify( void )
{
	std::stringstream address;
	address << this;
	return (address.str());
}


std::string			Brain::get_area( void )	{

	return (this->_area);
}

void				Brain::set_area( std::string area ) { 

	this->_area = area;
	return ;
}