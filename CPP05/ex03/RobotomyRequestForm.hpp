/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyrequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{

	public:
		//Canonique Form
		RobotomyRequestForm( std::string const &target );
		virtual ~RobotomyRequestForm( void );
		RobotomyRequestForm( const RobotomyRequestForm &copy );

		// Overload operator
		RobotomyRequestForm		&operator=( const RobotomyRequestForm &element );
	
	private:
		void					_do_action( void ) const;

		std::string const		_target;
};

#endif