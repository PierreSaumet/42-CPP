/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

/*
**	Animal default constructor
*/
Animal::Animal( void ) : _type("A random animal") {

	std::cout << this->_type << " is an animal = Animal default constructor " << std::endl;
	return ;
}

/*
**	Animal constructor
*/
Animal::Animal( std::string type ) : _type(type) {

	std::cout << this->_type << " is an animal = Animal constructor " << std::endl;
	return ;
}

/*
**	Animal copy constructor
*/
Animal::Animal( const Animal &copy) {

	this->_type = copy.getType();
	std::cout << this->_type << " is an animal = Animal copy constructor " << std::endl;
	return ;
}

/*
**	Animal destructor
*/
Animal::~Animal( void ) {

	std::cout << "Too bad an animal of " << this->getType() << "'s type died. = Animal destructor" << std::endl;
	return ;
}

/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
Animal			&Animal::operator=( const Animal &element ) {

	if (this != &element)
		this->_type = element.getType();
	std::cout << this->_type << " is an animal = Animal assignment operator " << std::endl;
	return (*this);
}

/*
**	Getter functions.
**		return the corresponding attributs.
*/
std::string		Animal::getType( void ) const {

	return (this->_type);
}

/*
**	Virtual member function
*/
void			Animal::makeSound( void ) const {

	return ;
}