/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/*
**	Zombie's default constructor
*/
Zombie::Zombie( void ) {

	_is_speaking = "Braiiiiiiinnnssss ...";
	return ;
}

/*
**  Zombie's constructor
*/
Zombie::Zombie( std::string name, std::string type) :
 _name(name), _type(type)
{
    _is_speaking = "Braiiiiiiinnnssss ...";
	Zombie::_nbInst += 1;
    return ;
}

/*
**  Zombie's copy constructor
*/
Zombie::Zombie( const Zombie &copy )
{
    std::cout << "Zombie's copy constructor is initialized!" << std::endl;
    _name = copy._name;
    _type = copy._type;
    return ;
}

/*
**  Zombie's Destructor
*/
Zombie::~Zombie( void )
{
	Zombie::_nbDelInst += 1;
	std::cout << "Zombies killed : " << Zombie::getNbDelInst() << std::endl;
    return ;
}

/*
**  Zombie's copy of assignement
*/
Zombie &Zombie::operator=( const Zombie &element)
{
    std::cout << "Operator assignement : " << &element << std::endl;
    return (*this);
}

/* *************************** */
/*  Zombie's Public functions  */
/* *************************** */

void        Zombie::announce( void )
{
    std::cout << "<" << this->_name << " (" << this->_type << ")> " << this->_is_speaking << std::endl; 
}

int			Zombie::getNbInst( void )
{
	return (Zombie::_nbInst);
}

int			Zombie::getNbDelInst( void )
{
	return (Zombie::_nbDelInst);
}

void		Zombie::set_name( const std::string name )
{
	this->_name = name;
}


/*
**	Attribut non-member
*/
int			Zombie::_nbInst = 0;
int			Zombie::_nbDelInst = 0;
