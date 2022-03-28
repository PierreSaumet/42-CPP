/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phony.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_CLASS_H
# define PONY_CLASS_H

#include <iostream>


class Pony {

    public:

        Pony ( std::string name, std::string color, std::string gender, int age, std::string power );                              // Constructor
        Pony ( const Pony& );                       // Copy of Constructor
        ~Pony ( void );                             // Destructor
        Pony &operator=( const Pony& element );     // Copy assignement operator

        void        fly( void );

    private:

        std::string  _name;
        std::string  _color;
        std::string  _gender;
        int          _age;
        std::string  _power;
};

#endif