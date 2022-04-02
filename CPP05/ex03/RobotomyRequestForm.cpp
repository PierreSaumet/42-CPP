/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyrequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
**	Bureaucrat constructor
*/
RobotomyRequestForm::RobotomyRequestForm( std::string const & target ) :
		Form(target, 72, 45), _target(target) {

	return ;
}

/*
**	Bureaucrat's destructor
*/
RobotomyRequestForm::~RobotomyRequestForm( void ) {

	return ;
}

/*
**	Bureaucrat's copy constructor
*/
RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm &copy ) :
	Form(copy._target, copy.getSign_Grade(), copy.getExec_Grade()) {
	
	return ;
}

/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
RobotomyRequestForm		&RobotomyRequestForm::operator=( const RobotomyRequestForm &element ) {

	if (this != &element)
	{
		Form::operator=(element);
	}
	return (*this);
}

/*
**	Other functions
*/
void						RobotomyRequestForm::_do_action( void ) const {

	srand(time(0));
	bool tf = (rand() % 2) != 0;

	std::cout << " \nBrrrrrr VRRSSSSRR HIIII ZRRRRRrrrRRrRR" << std::endl;
	if (tf)
	{
		std::cout << this->_target << " has been robotomized successfully " << std::endl;
	}
	else
		std::cout << " Sorry, it's a failure. Cannon't been robotomized!" << std::endl;
	
	return ;
}