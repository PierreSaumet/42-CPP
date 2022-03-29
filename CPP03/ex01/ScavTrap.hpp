/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{

	public:
		ScavTrap( void );										//	Default's constructor
		ScavTrap( std::string name );							//	Constructor
		virtual ~ScavTrap( void );										//	Destructor
		ScavTrap( const ScavTrap &copy );						//	Copy's constructor

		ScavTrap		&operator=( const ScavTrap &element );	//	Overload assignment operator

		void			guardGate( void ) const;

		void			attack(std::string const & target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );

	private:

};

#endif