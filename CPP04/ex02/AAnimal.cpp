/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

/*
**	AAnimal default constructor
*/
AAnimal::AAnimal( void ) : _type("A random Abstract Animal") {

	std::cout << this->_type << " is an  AbstractAnimal " << std::endl;
	return ;
}

/*
**	AAnimal constructor
*/
AAnimal::AAnimal( std::string type ) : _type(type) {

	std::cout << this->_type << " is an AAnimal " << std::endl;
	return ;
}

/*
**	AAnimal copy constructor
*/
AAnimal::AAnimal( const AAnimal &copy) {

	this->_type = copy.getType();
	return ;
}

/*
**	AAnimal destructor
*/
AAnimal::~AAnimal( void ) {

	std::cout << "Too bad an AAnimal of " << this->getType() << "'s type died." << std::endl;
	return ;
}

/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
AAnimal			&AAnimal::operator=( const AAnimal &element ) {

	if (this != &element)
		this->_type = element.getType();
	return (*this);
}

/*
**	Getter functions.
**		return the corresponding attributs.
*/
std::string		AAnimal::getType( void ) const {

	return (this->_type);
}

/*
**	Virtual member function
*/
// void			AAnimal::makeSound( void ) const {

// 	return ;
// }