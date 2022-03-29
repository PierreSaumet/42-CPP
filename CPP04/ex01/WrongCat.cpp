/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
**	WrongCat default constructor
*/
WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {

	std::cout << this->_type << " appears " << std::endl;
	return ;
}

/*
**	WrongCat copy constructor
*/
WrongCat::WrongCat( const WrongCat &copy) {

	this->_type = copy.getType();
	return ;
}

/*
**	WrongCat destructor
*/
WrongCat::~WrongCat( void ) {

	std::cout << "Again? " << this->getType() << " died." << std::endl;
	return ;
}


/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
WrongCat			&WrongCat::operator=( const WrongCat &element ) {

	if (this != &element)
		this->_type = element.getType();
	return (*this);
}

/*
**	Virtual member function
*/
void		WrongCat::makeSound( void ) const
{
	std::cout << "Euh coin coin coin?" << std::endl;
	return ;
}