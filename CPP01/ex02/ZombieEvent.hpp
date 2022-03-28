/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include "Zombie.hpp"

class   ZombieEvent {

    public:

        ZombieEvent( void );
        ZombieEvent ( const ZombieEvent& );
        ~ZombieEvent( void );
        ZombieEvent &operator=( const ZombieEvent &element );

        
        void        setZombieType( const std::string type );

        Zombie * newZombie ( std::string name );
        Zombie * randomChump( void );

    private:
    
        std::string     _type;

};



#endif