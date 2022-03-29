/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
**	WrongAnimal default constructor
*/
WrongAnimal::WrongAnimal( void ) : _type("A random WrongAnimal") {

	std::cout << this->_type << " is a WrongAnimal  = Wrong Animal  default constructor" << std::endl;
	return ;
}

/*
**	WrongAnimal constructor
*/
WrongAnimal::WrongAnimal( std::string type ) : _type(type) {

	std::cout << this->_type << " is a WrongAnimal = Wrong Animal construcotr" << std::endl;
	return ;
}

/*
**	WrongAnimal copy constructor
*/
WrongAnimal::WrongAnimal( const WrongAnimal &copy) {

	this->_type = copy.getType();
	std::cout << this->_type << " appears = Wrong Animal copy construcotr" << std::endl;
	return ;
}

/*
**	WrongAnimal destructor
*/
WrongAnimal::~WrongAnimal( void ) {

	std::cout << "Too bad a WrongAnimal of " << this->getType() << "'s type died." << std::endl;
	return ;
}

/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
WrongAnimal			&WrongAnimal::operator=( const WrongAnimal &element ) {

	if (this != &element)
		this->_type = element.getType();
	std::cout << this->_type << " appears = Wrong Animal  copy construcotr" << std::endl;
	return (*this);
}

/*
**	Getter functions.
**		return the corresponding attributs.
*/
std::string		WrongAnimal::getType( void ) const {

	return (this->_type);
}

/*
**	Virtual member function
*/
void			WrongAnimal::makeSound( void ) const {

	std::cout << "Wrong Animal : coin coin coin" << std::endl;
	return ;
}