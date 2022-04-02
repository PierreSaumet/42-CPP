/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Form.hpp"
#include <exception>

class Intern
{

	public:
		// Canonique form
		Intern( void );
		virtual ~Intern( void );
		Intern( const Intern &copy );

		// Overload assignment operator
		Intern		&operator=( const Intern &element );

		// Overload class exception
		class FormDoesNotMatch : public std::exception {

			virtual const char *what() const throw();
		};

		// Other function
		Form		*makeForm( std::string const &name_form, std::string const &target );
	
	private:
		
};

struct		Form_type
{
		std::string 	target;
		Form			*(*action)(std::string const &target);
};

#endif