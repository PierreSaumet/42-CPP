/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{

	public:
		// Canonique form`
		AAnimal( std::string type );
		AAnimal( const AAnimal &copy );
		virtual ~AAnimal( void );

		// Overload operator
		AAnimal				&operator=( const AAnimal &element );

		// Getter
		std::string			getType( void ) const;

		// Methode PURE
		virtual void		makeSound( void ) const = 0;

	protected:
		AAnimal( void );
		std::string			_type;

};

#endif