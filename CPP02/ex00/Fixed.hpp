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

class	Fixed
{
	public:

		Fixed( void );											//	Default constructor
		~Fixed( void );											//	Destructor
		Fixed( const Fixed &copy);								//	Copy's constructor
		Fixed &operator=( const Fixed &element );				//	Overload assignment operator

		int						getRawBits( void ) const;		//	Return the _fix_point's attribut
		void					setRawBits(int const raw );		//	Setup the _fix_point's attribut

	private:

		int						_fix_point;
		static const int		_bit_nbr;

};

#endif
