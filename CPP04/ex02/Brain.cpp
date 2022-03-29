/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

/*
**	Brain default constructor
*/
Brain::Brain ( void ) {

	std::cout << "I am God! no, i am just a Brain." << std::endl;
	return ;
}

/*
**	Brain copy constructor
*/
Brain::Brain( const Brain &copy ) {

	for (int i = 0; i < 100; i++)
		this->_ideas[i] = copy._ideas[i];
	return ;
}

/*
**	Brain destructor
*/
Brain::~Brain( void ) {

	std::cout << "lobotomy Party" << std::endl;
	return ;
}


/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
Brain			&Brain::operator=( const Brain &element ) {

	if (this != &element)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = element._ideas[i];
	}
	return (*this);
}

/*
**	Getter functions.
**		return the corresponding attributs.
*/
std::string			Brain::getIdeas( unsigned int i ) const {

	return (this->_ideas[i]);
}