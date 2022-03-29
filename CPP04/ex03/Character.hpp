/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{

	public:
		// Canonique form
		Character( std::string const &name );
		virtual ~Character( void );
		Character( const Character &copy );

		// Overload operator
		Character				&operator=( const Character &element );
	
		// Getter
		std::string const 		&getName( void ) const ;

		// Other functions
		void					equip( AMateria* m );
		void					unequip( int idx );
		void					use( int idx, ICharacter &target );

	private:
		Character( void );
		std::string				_name;
		AMateria				*_inventory[4];
};

#endif