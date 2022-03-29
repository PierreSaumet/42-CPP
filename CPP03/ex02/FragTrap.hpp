/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{

	public:
		FragTrap( void );										//	Default's constructor
		FragTrap( std::string name );							//	Constructor
		~FragTrap( void );										//	Destructor
		FragTrap( const FragTrap &copy );						//	Copy's constructor

		FragTrap		&operator=( const FragTrap &element );	//	Overload assignment operator

		void			highFivesGuys( void ) const ;

	private:
		
};


#endif