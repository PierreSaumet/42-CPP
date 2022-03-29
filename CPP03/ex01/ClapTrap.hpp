/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <stdlib.h>
#include <time.h>

class	ClapTrap
{

	public:
		ClapTrap( void );										//	Default's constructor
		ClapTrap( std::string name, unsigned int hit_pts, unsigned int energy, unsigned int attack );							//	Constructor
		virtual ~ClapTrap( void );										//	Destructor
		ClapTrap( const ClapTrap &copy );						//	Copy's constructor

		ClapTrap		&operator=( const ClapTrap &element );	//	Overload assignment operator

		void			attack(std::string const & target );
		void			takeDamage( unsigned int amount );
		void			beRepaired( unsigned int amount );

	protected:
		std::string		_Name;
		unsigned int	_Hitpoints;
		unsigned int	_Energy_points;
		unsigned int	_Attack_damage;
};

#endif