/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

/*
**	Dog default constructor
*/
Dog::Dog( void ) : Animal("Dog") {

	std::cout << this->_type << " appears = Dog class constructor" << std::endl;
	return ;
}

/*
**	Dog copy constructor
*/
Dog::Dog( const Dog &copy) {

	this->_type = copy.getType();
	std::cout << this->_type << " appears = Dog copy constructor" << std::endl;
	return ;
}

/*
**	Dog destructor
*/
Dog::~Dog( void ) {

	std::cout << "Too bad " << this->getType() << " died  = Dog class destructor" << std::endl;
	return ;
}


/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
Dog			&Dog::operator=( const Dog &element ) {

	if (this != &element)
		this->_type = element.getType();
	std::cout << this->_type << " appears = Dog assignment operator" << std::endl;
	return (*this);
}

/*
**	Virtual member function
*/
void		Dog::makeSound( void ) const
{
	std::cout << "Waouf Waouf Waouf" << std::endl;
	return ;
}