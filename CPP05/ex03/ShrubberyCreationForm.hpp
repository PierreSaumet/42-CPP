/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <exception>
#include <iostream>
#include <fstream>
#include <sstream>
#include <ios>

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{

	public:
		// Canonique form
		ShrubberyCreationForm( std::string const &target );
		virtual ~ShrubberyCreationForm( void );
		ShrubberyCreationForm( const ShrubberyCreationForm &copy );

		// Overload operator
		ShrubberyCreationForm	&operator=( const ShrubberyCreationForm &element );

		// Overload class exception
		class CannotOpenFile : public std::exception {

			virtual const char *what() const throw();
		};

	private:
		void				_do_action( void ) const;

		std::string const	_target;


};


#endif