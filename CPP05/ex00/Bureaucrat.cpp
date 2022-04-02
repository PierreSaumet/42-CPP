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

#include "Bureaucrat.hpp"

/*
**	Bureaucrat's default constructor
*/
Bureaucrat::Bureaucrat( void ) :  _name("NULL"), _grade(0) {

	std::cout << "Init default Bureaucrat object" << std::endl;
	return ;
}

/*
**	Bureaucrat constructor
*/
Bureaucrat::Bureaucrat( std::string const &name,  int grade) {

	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_name = name;
	this->_grade = grade;

	std::cout << "A Bureaucrat appears: " << this->_name << std::endl;
	return ;
}

/*
**	Bureaucrat's destructor
*/
Bureaucrat::~Bureaucrat( void ) {

	std::cout << "One Bureaucrat died: " << this->_name << std::endl;
	return ;
}

/*
**	Bureaucrat's copy constructor
*/
Bureaucrat::Bureaucrat( const Bureaucrat &copy ) {

	if (copy.getGrade() < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (copy.getGrade() > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_name = copy.getName();
	this->_grade = copy.getGrade();
	return ;
}

/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
Bureaucrat					&Bureaucrat::operator=( const Bureaucrat &element ) {

	if (this != &element)
	{
		this->_name = element.getName();
		this->_grade = element.getGrade();
	}
	return (*this);
}

/*
**	Getters
*/
std::string const			&Bureaucrat::getName( void ) const {

	return (this->_name);
}

int							Bureaucrat::getGrade( void ) const {

	return (this->_grade);
}

/*
**	Other functions member
*/
void						Bureaucrat::incGrade( void ) {

	if (this->getGrade() == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
	return ;
}

void						Bureaucrat::decGrade( void ) {

	if (this->getGrade() == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
	return ;
}

/*	************************	*/
/*	Overload class exception	*/
/*	************************	*/
const char *				Bureaucrat::GradeTooHighException::what() const throw() {

	return ("This Bureaucrat has a grade too hight");
}

const char *				Bureaucrat::GradeTooLowException::what() const throw() {

	return ("This Bureaucrat has a grade too low");
}

/*	*****************************	*/
/*	Overload's operator NO MEMBER	*/
/*	*****************************	*/
std::ostream				&operator<<( std::ostream &o, Bureaucrat const &rhs) {

	o << "<" << rhs.getName() << ">, bureaucrat grade <" << rhs.getGrade() << ">";
	return (o);
}