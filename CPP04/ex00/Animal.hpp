/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{

	public:
		// Canonique form`
		Animal( void );
		Animal( std::string type );
		Animal( const Animal &copy );
		virtual ~Animal( void );

		// Overload operator
		Animal				&operator=( const Animal &element );

		// Getter
		std::string			getType( void ) const;

		// Function virtual member
		virtual void		makeSound( void ) const;

	protected:
		std::string			_type;

};

#endif