/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
class AMateria;
#include "ICharacter.hpp"

class AMateria
{
	public:
		// Canonique form
		AMateria( std::string const &type );
		virtual ~AMateria( void );
		AMateria( const AMateria &copy );

		// Overload operator
		AMateria			&operator=( const AMateria &element );

		// Getter
		std::string const	&getType( void ) const ;	// Returns the materia type
		//unsigned int		getXP( void ) const ;		//Returns the Materia's XP

		// Other Functions
		virtual AMateria*	clone( void ) const = 0;
		virtual void		use(ICharacter& target );


	protected:
		std::string			_type;

	private:
		AMateria( void );
};

#endif