/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClassScalar.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASSSCALAR_HPP
# define CLASSSCALAR_HPP

# define INT 1
# define CHAR 2
# define DOUBLE 3
# define FLOAT 4

# define ERROR_DOUBLE_SIGN 5
# define ERROR_NOT_CONVERTIBLE 6

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <numeric>
#include <stdio.h>
#include <float.h>
#include <limits>
#include <iomanip>

class Scalarconvertor
{

	public:
		// Canonique form
		Scalarconvertor( std::string const &argv );
		virtual ~Scalarconvertor( void );
		Scalarconvertor( const Scalarconvertor &copy );

		// Overload operator
		Scalarconvertor		&operator=( const Scalarconvertor &element );

		// Getter
		std::string			get_argument( void ) const ;

		// Other functions
		void				convert( void );
		void				display_char( void ) const;
		void				display_int( void ) const;
		void				display_float( void) const;
		void				display_double( void ) const;

		int					check_type( void );

	private:
		Scalarconvertor( void );
		std::string			_arg;


};

#endif