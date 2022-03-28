/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

/*
**  Constructor of Pony's class
*/
Pony::Pony( std::string name, std::string color, std::string gender, int age, std::string power ) :
 _name(name), _color(color), _gender(gender), _age(age), _power(power)
{
    std::cout << "Constructor is initialized: so a Pony is born!" << std::endl;
    std::cout << "this->name = " << this->_name << std::endl;
    std::cout << "this->color = " << this->_color << std::endl;
    std::cout << "this->gender = " << this->_gender << std::endl;
    std::cout << "this->age = " << this->_age << std::endl;
    std::cout << "this->power = " << this->_power << std::endl;
    std::cout << std::endl;
    return ;
}

/*
**  Copy of Pony's constructor
*/
Pony::Pony( const Pony& copy ) {
    
    std::cout << "Copy of Pony's constructor is initialized :" << &copy << std::endl;
    _name = copy._name;
    _color = copy._color;
    _gender = copy._gender;
    _age = copy._age;
    _power = copy._power;
    return ;
}

/*
**  Destructor of Pony's class
*/
Pony::~Pony( void ) {

    std::cout << "Destructor is used so: " << this->_name << " died, snif!" << std::endl;
    return ;
}

/*
**  Copy of assignement operator
*/
Pony &Pony::operator= ( const Pony& element ) {

    std::cout << "Operator assignement = " << &element << std::endl;
    //return ;
    return (*this);
}

/*
**  Fly function
*/
void            Pony::fly( void )
{
    std::cout << this->_name << " is flying" << std::endl;
    return ;
}