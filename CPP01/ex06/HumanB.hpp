/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB {

	public:

		HumanB ( const std::string name );
		HumanB ( const HumanB& );
		~HumanB ( void );
		HumanB &operator=( const HumanB &element);
		
		void				setWeapon( Weapon &weapon);
		void				attack( void );

	private:
		std::string			_name;
		Weapon				*_weapon;

};

#endif