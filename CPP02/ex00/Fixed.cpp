/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
**	Constante int " _bit_nbr " setup at " 8 "
*/
const int Fixed::_bit_nbr = 8;

/*
**	Fixed's default constructor
**		Setup _fix_point to 0.
*/
Fixed::Fixed( void ) : _fix_point(0) {

	std::cout << "Default constructor called" << std::endl;
	return ;
}

/*
**	Fixed's destructor 
*/
Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;
	return ;
}

/*
**	Fixed's copy constructor
*/
Fixed::Fixed( const Fixed &copy) {

	std::cout << "Copy constructor called" << std::endl;
	this->_fix_point = copy._fix_point;
	return ;
}

/*
**	Fixed's overload assignment operator
*/
Fixed &Fixed::operator=( const Fixed &element) {

	std::cout << "Assignation operator called" << std::endl;
	if (this != &element)
	{
		this->_fix_point = element.getRawBits();
	}
	return (*this);
}


/*	************************	*/
/*	Fixed's Mumber functions	*/
/*	************************	*/

/*
**	int	getRawBits( void );
**		return _fix_point
*/
int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fix_point);
}

/*
**	void	setRawBits(int const raw );
**				Setup _fix_point to raw
*/
void	Fixed::setRawBits(int const raw ) {

	std::cout << "setRawBits member function called" << std::endl;
	this->_fix_point = raw;
	return ;
}
