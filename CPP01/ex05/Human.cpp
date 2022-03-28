/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

/*
**	Human's constructor
*/
Human::Human( void ) {

	_brain = new Brain();
	return ;
}

/*
**	Human's copy construcor
*/
Human::Human( const Human& copy) {

	_brain = copy._brain;
	return ;
}

/*
**	Human's destructor
*/
Human::~Human( void ) {

	delete this->_brain;
	return ;
}

/*
**	Human's copy assignment
*/
Human &Human::operator=( const Human &element ) {

	if (this != &element)
	{
		this->_brain = element._brain;
		return (*this);
	}
	return (*this);
}

// other functions

Brain		&Human::getBrain( void ) {

	return (*this->_brain);
}

std::string	Human::identify( void ) {

	return (this->getBrain().identify());
}