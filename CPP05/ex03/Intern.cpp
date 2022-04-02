/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
**	Intern constructor
*/
Intern::Intern( void ) {

	return ;
}

/*
**	Intern's destructor
*/
Intern::~Intern( void ) {

	return ;
}

/*
**	Intern's copy constructor
*/
Intern::Intern( const Intern &copy ) {

	(void)copy;
	return ;
}

/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
Intern					&Intern::operator=( const Intern &element ) {

	if (this == &element)
		return (*this);
	return (*this);
}


/*	************************	*/
/*	Overload class exception	*/
/*	************************	*/
const char *			Intern::FormDoesNotMatch::what() const throw() {

	return ("Sorry, the target doesn't match.");
}

/*
**	Other functions
*/
Form*	makeShrubbery( std::string const &target)
{
	return new ShrubberyCreationForm(target);
}

Form*	makePresident( std::string const &target )
{
	return new PresidentialPardonForm(target);
}

Form*	makeRobotomy( std::string const &target )
{
	return new RobotomyRequestForm(target);
}

typedef void(Form::*ptr)(std::string const &target );		

Form*					Intern::makeForm( std::string const &name_form, std::string const &target ) {

	//Form				*elem = NULL;

	std::string			form[3] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};

	Form_type			test[3] = {
		{form[0], makePresident},
		{form[1], makeRobotomy},
		{form[2], makeShrubbery}
	};


	for (int i = 0; i < 3; i++)
	{
		if (test[i].target == name_form)
		{
			std::cout << "Intern creates a " << test[i].target << " form." << std::endl;
			return (test[i].action(target));
		}
		else if (i == 2)
			throw Intern::FormDoesNotMatch();
	}
	return (NULL);
}