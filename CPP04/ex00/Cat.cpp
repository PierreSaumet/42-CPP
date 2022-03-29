/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

/*
**	Cat default constructor
*/
Cat::Cat( void ) : Animal("Cat") {

	std::cout << this->_type << " appears = Cat class constructor" << std::endl;
	return ;
}

/*
**	Cat copy constructor
*/
Cat::Cat( const Cat &copy) {

	this->_type = copy.getType();
	std::cout << this->_type << " appears = Cat copy constructor" << std::endl;
	return ;
}

/*
**	Cat destructor
*/
Cat::~Cat( void ) {

	std::cout << "Too bad " << this->getType() << " died  = Cat class destructor" << std::endl;
	return ;
}


/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
Cat			&Cat::operator=( const Cat &element ) {

	if (this != &element)
		this->_type = element.getType();
	std::cout << this->_type << " appears = Cat assignment operator" << std::endl;
	return (*this);
}

/*
**	Virtual member function
*/
void		Cat::makeSound( void ) const
{
	std::cout << "Miaou miaou miaou" << std::endl;
	return ;
}