/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
class Form;
#include "Bureaucrat.hpp"

class Form
{
	public:
		// Canonique form
		Form( std::string const &name, int sign_grade, int exec_grade );
		virtual ~Form( void );
		Form( const Form &copy);

		// Overload operator
		Form					&operator=( const Form &element );

		// Getter
		std::string const		getName( void ) const;
		bool					getSign( void ) const;
		int						getSign_Grade( void ) const;
		int						getExec_Grade( void ) const;

		// Overload class exception
		class GradeTooHighException : public std::exception {
			
			virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {

			virtual const char *what() const throw();
		};

		class FormAlreadySigned : public std::exception {

			virtual const char *what() const throw();
		};

		// Other functions
		void					beSigned( const Bureaucrat &bureaucrat );		

	private:
		std::string				_name;
		bool					_signed;
		int						_sign_grade;
		int						_exec_grade;

};

std::ostream	&operator<<( std::ostream &o, Form const &rhs);

#endif