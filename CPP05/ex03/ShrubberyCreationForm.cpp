/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
**	Bureaucrat constructor
*/
ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target ) :
		Form(target, 145, 137), _target(target) {

	return ;
}

/*
**	Bureaucrat's destructor
*/
ShrubberyCreationForm::~ShrubberyCreationForm( void ) {

	return ;
}

/*
**	Bureaucrat's copy constructor
*/
ShrubberyCreationForm::ShrubberyCreationForm( const ShrubberyCreationForm &copy ) :
	Form(copy._target, copy.getSign_Grade(), copy.getExec_Grade()) {
	
	return ;
}

/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
ShrubberyCreationForm		&ShrubberyCreationForm::operator=( const ShrubberyCreationForm &element ) {

	if (this != &element)
	{
		Form::operator=(element);
	}
	return (*this);
}

/*	************************	*/
/*	Overload class exception	*/
/*	************************	*/
const char *			ShrubberyCreationForm::CannotOpenFile::what() const throw() {

	return (" Error, cannot open the file...");
}

/*
**	Other functions
*/
void			ShrubberyCreationForm::_do_action( void ) const {

	

	std::string const	filename = (this->getName() + "_shrubbery");

	std::cout << filename << std::endl;
	std::ofstream fs(filename.c_str(), std::ios::out | std::ios::app);

	if (fs.is_open() == 0 || fs.bad())
	{
		fs.close();
		throw ShrubberyCreationForm::CannotOpenFile();
	}
	else
	{
		fs << "     #     " << std::endl;
		fs << "    #*#    " << std::endl;
		fs << "   #***#   " << std::endl;
		fs << "  #*****#  " << std::endl;
		fs << " #*******# " << std::endl;
		fs << " ######### " << std::endl;
		fs << "    { }    " << std::endl;
		fs << "    { }    " << std::endl;
		fs << "    { }    " << std::endl;
		fs << "-----------" << std::endl;
		fs.close();
	}
	return ;
}