/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
#define ZOMBIE_HORDE_HPP

#include "Zombie.hpp"

class	ZombieHorde {

	public:

		ZombieHorde( int n );
		ZombieHorde( const ZombieHorde& );
		~ZombieHorde( void );
		ZombieHorde &operator=( const ZombieHorde &element );
	
		void		announce( void );

	private:

		Zombie		*_zombies;
		int			_nbr_zombies;
};

#endif