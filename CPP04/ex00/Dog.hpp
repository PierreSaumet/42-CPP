/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HHPP
# define DOG_HHPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		// Canonique form
		Dog( void );
		~Dog( void );
		Dog( const Dog &copy );

		// overload operator
		Dog			&operator=( const Dog &element );

		// member function
		void		makeSound( void ) const;

};

#endif