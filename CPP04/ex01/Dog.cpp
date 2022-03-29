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

	std::cout << this->_type << " appears " << std::endl;
	this->_brain = new Brain();
	return ;
}

/*
**	Dog copy constructor
*/
Dog::Dog( const Dog &copy) {

	std::cout << "A copy of dog? " << std::endl;
	this->_type = copy.getType();
	this->_brain = new Brain(*copy._brain);
	return ;
}

/*
**	Dog destructor
*/
Dog::~Dog( void ) {

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
Dog			&Dog::operator=( const Dog &element ) {

	std::cout << " 2 dogs are equal? " << std::endl;
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
void		Dog::makeSound( void ) const
{
	std::cout << "Waouf Waouf Waouf" << std::endl;
	return ;
}