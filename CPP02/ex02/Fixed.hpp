/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	public:

		Fixed( void );											//	Default constructor
		Fixed( const int i );									//	Constructor with a int parameter
		Fixed( const float f );									//	Constructor with a float parameter
		~Fixed( void );											//	Destructor
		Fixed( const Fixed &copy);								//	Copy's constructor
		
		// Overload functions
		Fixed 					&operator=( const Fixed &element );	//	Overload assignment operator

		bool					operator==( Fixed const &rhs ) const;
		bool					operator!=( Fixed const &rhs ) const;
		bool					operator<=( Fixed const &rhs ) const;
		bool					operator>=( Fixed const &rhs ) const;
		bool					operator<( Fixed const &rhs ) const;
		bool					operator>( Fixed const &rhs ) const;

		// Arithmetic functions
		Fixed					operator+( const Fixed &rhs ) const;
		Fixed					operator-( const Fixed &rhs ) const;
		Fixed					operator*( const Fixed &rhs ) const;
		Fixed					operator/( const Fixed &rhs ) const;

		// Pre & post increment
		Fixed					&operator++( void );
		Fixed					operator++( int );

		// Pre & post decrement
		Fixed					&operator--( void );
		Fixed					operator--( int );

		// Overload static function; min & max
		static Fixed			&min( Fixed &first, Fixed &second );
		const static Fixed		&min( const Fixed &first, const Fixed &second) ;
		
		static Fixed			&max( Fixed &first, Fixed &second );
		const static Fixed		&max( const Fixed &first, const Fixed &second );


		int						getRawBits( void ) const;		//	Return the _fix_point's attribut
		void					setRawBits(int const raw );		//	Setup the _fix_point's attribut

		float					toFloat( void ) const;			//	Convert point fix to float
		int						toInt( void ) const;			//	Convert point fix to int

	private:

		int						_fix_point;
		static const int		_bit_nbr;

};

std::ostream &operator<<( std::ostream &o, Fixed const &rhs);

#endif
