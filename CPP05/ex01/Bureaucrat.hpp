/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
	public:
		//Canonique form
		Bureaucrat( std::string const &name, int grade );
		virtual ~Bureaucrat( void );
		Bureaucrat( const Bureaucrat &copy );

		// Overload operator
		Bureaucrat		&operator=( const Bureaucrat &element );

		// Getter
		std::string const		&getName( void ) const;
		int						getGrade( void ) const;

		// Other functions
		void					incGrade( void );
		void					decGrade( void );					

		// Overload class exception
		class GradeTooHighException : public std::exception
		{
			virtual const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			virtual const char *what() const throw();
		};

		// Other functions
		void					signForm( Form &form ) const;



	private:
		Bureaucrat( void );
		std::string 			_name;
		int						_grade;

};

std::ostream &operator<<( std::ostream &o, Bureaucrat const &rhs );

#endif