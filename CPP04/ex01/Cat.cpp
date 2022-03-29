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

	std::cout << this->_type << " appears " << std::endl;
	this->_brain = new Brain();
	return ;
}

/*
**	Cat copy constructor
*/
Cat::Cat( const Cat &copy) {

	std::cout << "A copy of cat? " << std::endl;
	this->_type = copy.getType();
	this->_brain = new Brain(*copy._brain);
	return ;
}

/*
**	Cat destructor
*/
Cat::~Cat( void ) {

	delete this->_brain;
	std::cout << "Too bad " << this->getType() << " died." << std::endl;
	return ;
}


/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
Cat			&Cat::operator=( const Cat &element ) {

	std::cout << " 2 cats are equal? " << std::endl;
	if (this != &element)
	{
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*element._brain);
		Animal::operator=( element );
	}
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