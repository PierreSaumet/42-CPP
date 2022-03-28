/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <stdlib.h>
#include <time.h>

class   Zombie {

    public:

		Zombie();
        Zombie( std::string name, std::string type );       // Zombie's constructor
        Zombie ( const Zombie& );                           // Zombie's copy constructor
        ~Zombie ( void );                                   // Zombie's destructor
        Zombie &operator=( const Zombie &element );         // Zombie's assignment operator

        void            announce( void );
		static int		getNbInst( void );
		static int		getNbDelInst( void );
		void			set_name( const std::string name );

    private:

        std::string         _name;
        std::string         _type;
        std::string         _is_speaking;
		static int			_nbInst;
		static int			_nbDelInst;
};

#endif