/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class	DiamondTrap;

class	DiamondTrap: public FragTrap , public ScavTrap
{

	public:

		DiamondTrap( void );
		DiamondTrap( std::string name );
		virtual ~DiamondTrap( void );
		DiamondTrap( const DiamondTrap &copy );

		DiamondTrap			&operator=( const DiamondTrap &element );

		void				attack( std::string const & target );

		void				whoAmI( void );

	private:
		std::string			_name;
};

#endif