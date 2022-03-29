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

	////std::cout << "Default constructor called" << std::endl;
	return ;
}

/*
**	Fixed's constructor with a const integer
**		Convert the const integer to a fixed-point
*/
Fixed::Fixed( const int i ) {

	//std::cout << "Int constructor called" << std::endl;
	this->_fix_point = i << this->_bit_nbr;
	return ;
}

/*
**	Fixed's constructor with a const float
**		Convert the const float to a fixed-point
*/
Fixed::Fixed( const float f ) {

	//std::cout << "Float constructor called" << std::endl;
	this->_fix_point = (int)(roundf(f * (1 << this->_bit_nbr)));
	return ;
}

/*
**	Fixed's destructor 
*/
Fixed::~Fixed( void ) {

	//std::cout << "Destructor called" << std::endl;
	return ;
}

/*
**	Fixed's copy constructor
*/
Fixed::Fixed( const Fixed &copy ) {

	//std::cout << "Copy constructor called" << std::endl;
	this->_fix_point = copy._fix_point;
	return ;
}

/*
**	Fixed's overload assignment operator
*/
Fixed &Fixed::operator=( const Fixed &element ) {

	//std::cout << "Assignation operator called" << std::endl;
	if (this != &element)
	{
		this->_fix_point = element.getRawBits();
	}
	return (*this);
}

/*
**	Fixed's overload == operator
*/
bool			Fixed::operator==( const Fixed &rhs ) const {

	return (this->_fix_point == rhs.getRawBits());
}

/*
**	Fixed's overload != operator
*/
bool			Fixed::operator!=( const Fixed &rhs ) const {

	return (this->_fix_point != rhs.getRawBits());
}

/*
**	Fixed's overload <= operator
*/
bool			Fixed::operator<=( const Fixed &rhs ) const {

	return (this->_fix_point <= rhs.getRawBits());
}

/*
**	Fixed's overload >= operator
*/
bool			Fixed::operator>=( const Fixed &rhs ) const {

	return (this->_fix_point >= rhs.getRawBits());
}

/*
**	Fixed's overload < operator
*/
bool			Fixed::operator<( const Fixed &rhs ) const {

	return (this->_fix_point < rhs.getRawBits());
}

/*
**	Fixed's overload > operator
*/
bool			Fixed::operator>( const Fixed &rhs ) const {

	return (this->_fix_point > rhs.getRawBits());
}

/*
**	Fixed's arithmetic + operator
*/
Fixed			Fixed::operator+( const Fixed &rhs ) const {

	Fixed		instance;

	instance.setRawBits(this->_fix_point + rhs.getRawBits());
	return (instance);
}

/*
**	Fixed's arithmetic - operator
*/
Fixed			Fixed::operator-( const Fixed &rhs ) const {

	Fixed		instance;

	instance.setRawBits(this->_fix_point - rhs.getRawBits());
	return (instance);
}

/*
**	Fixed's arithmetic * operator
*/
Fixed			Fixed::operator*( const Fixed &rhs ) const {

	Fixed		instance;

	instance.setRawBits((this->_fix_point * rhs.getRawBits()) >> this->_bit_nbr);
	return (instance);
}

/*
**	Fixed arithmetic / operator
*/
Fixed			Fixed::operator/(const Fixed &rhs ) const {

	Fixed		instance;

	instance.setRawBits((this->_fix_point << this->_bit_nbr) / rhs.getRawBits());
	return (instance);
}

/*
**	Fixed's pre increment function ++i
*/
Fixed			&Fixed::operator++( void ) {

	this->_fix_point++;
	return (*this);
}

/*
**	Fixed's post increment function i++
*/
Fixed			Fixed::operator++( int ) {

	Fixed		instance(*this);

	operator++();
	return (instance);
}

/*
**	Fixed's pre decrement function --i
*/
Fixed			&Fixed::operator--( void ) {

	this->_fix_point--;
	return (*this);
}

/*
**	Fixed's post decrement function i--
*/
Fixed			Fixed::operator--( int ) {

	Fixed		instance(*this);

	operator--();
	return (instance);
}

/*	************************	*/
/*	Fixed's Member functions	*/
/*	************************	*/

/*
**	int	getRawBits( void );
**		return _fix_point
*/
int		Fixed::getRawBits( void ) const {

	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fix_point);
}

/*
**	void	setRawBits(int const raw );
**				Setup _fix_point to raw
*/
void	Fixed::setRawBits(int const raw ) {

	//std::cout << "setRawBits member function called" << std::endl;
	this->_fix_point = raw;
	return ;
}

/*
**	float	toFloat( void ) const:
**				Convert a fixed-point to float
*/
float	Fixed::toFloat( void ) const {

	return ((float)this->_fix_point / (float)(1 << this->_bit_nbr));
}

/*
**	int	toInt( void ) const;
**				Convert fixed-point to int
*/
int		Fixed::toInt( void ) const {

	return ((int)(this->_fix_point >> this->_bit_nbr));
}



/*	********************	*/
/*	Non Member functions	*/
/*	********************	*/
Fixed		&Fixed::min( Fixed &first, Fixed &second ) {

	return (first < second ? first : second);
}

const Fixed	&Fixed::min( const Fixed &first, const Fixed &second ) {

	return (first < second ? first : second);
}

Fixed		&Fixed::max( Fixed &first, Fixed &second ) {

	return (first > second ? first : second);
}

const Fixed	&Fixed::max( const Fixed &first, const Fixed &second ) {

	return (first > second ? first : second);
}

/*
**	Overload operator non member of the class
**		--> operator <<
*/
std::ostream & operator<<( std::ostream &o, Fixed const &rhs) {

	o << rhs.toFloat();
	return (o);
}
