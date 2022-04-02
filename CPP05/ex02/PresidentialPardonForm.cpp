/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
**	Bureaucrat constructor
*/
PresidentialPardonForm::PresidentialPardonForm( std::string const & target ) :
		Form(target, 25, 5), _target(target) {

	return ;
}

/*
**	Bureaucrat's destructor
*/
PresidentialPardonForm::~PresidentialPardonForm( void ) {

	return ;
}

/*
**	Bureaucrat's copy constructor
*/
PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm &copy ) :
	Form(copy._target, copy.getSign_Grade(), copy.getExec_Grade()) {
	
	return ;
}

/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
PresidentialPardonForm		&PresidentialPardonForm::operator=( const PresidentialPardonForm &element ) {

	if (this != &element)
	{
		Form::operator=(element);
	}
	return (*this);
}

/*
**	Other functions
*/
void						PresidentialPardonForm::_do_action( void ) const {

	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return ;
}