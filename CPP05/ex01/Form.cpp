/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
**	Form constructor
*/
Form::Form( std::string const &name,  int sign_grade, int exec_grade) {

	if (sign_grade < 1 || exec_grade < 1)
		throw Form::GradeTooHighException();
	else if (sign_grade > 150 || exec_grade > 150)
		throw Form::GradeTooLowException();
	this->_name = name;
	this->_sign_grade = sign_grade;
	this->_exec_grade = exec_grade;
	this->_signed = false;

	std::cout << "A Form appears: " << this->_name << std::endl;
	return ;
}

/*
**	Form's destructor
*/
Form::~Form( void ) {

	std::cout << "A form diseapearss: " << this->_name << std::endl;
	return ;
}

/*
**	Form's copy constructor
*/
Form::Form( const Form &copy ) {

	if (copy.getSign_Grade() < 1 || copy.getExec_Grade() < 1)
		throw Form::GradeTooHighException();
	else if ( copy.getSign_Grade() > 150 || copy.getExec_Grade() > 150)
		throw Form::GradeTooLowException();
	this->_name = copy.getName();
	this->_signed = copy.getSign();
	this->_sign_grade = copy.getSign_Grade();
	this->_exec_grade = copy.getExec_Grade();
	return ;
}

/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
Form					&Form::operator=( const Form &element ) {

	if (element.getSign_Grade() < 1 || element.getExec_Grade() < 1)
		throw Form::GradeTooHighException();
	else if ( element.getSign_Grade() > 150 || element.getExec_Grade() > 150)
		throw Form::GradeTooLowException();
	if (this != &element)
	{
		this->_name = element.getName();
		this->_signed = element.getSign();
		this->_sign_grade = element.getSign_Grade();
		this->_exec_grade = element.getExec_Grade();
	}
	return (*this);
}

/*
**	Getters
*/
std::string const		Form::getName( void ) const {

	return (this->_name);
}

bool					Form::getSign( void ) const {

	return (this->_signed);
}

int						Form::getSign_Grade( void ) const {

	return (this->_sign_grade);
}

int						Form::getExec_Grade( void ) const {

	return (this->_exec_grade);
}

/*	************************	*/
/*	Overload class exception	*/
/*	************************	*/
const char *			Form::GradeTooHighException::what() const throw() {

	return ("This Form needs a lower grade.");
}

const char *			Form::GradeTooLowException::what() const throw() {

	return ("This Form needs a higher grade.");
};

const char *			Form::FormAlreadySigned::what() const throw() {

	return ("This Form is already signed.");
}

/*
**	Other functions
*/
void					Form::beSigned( const Bureaucrat &Bureaucrat ) {

	if (this->_signed == true)
		throw Form::FormAlreadySigned();
	else if (Bureaucrat.getGrade() > this->getSign_Grade())
		throw Form::GradeTooLowException();
	this->_signed = true;
	return ;
}


/*	*****************************	*/
/*	Overload's operator NO MEMBER	*/
/*	*****************************	*/
std::ostream				&operator<<( std::ostream &o, Form const &rhs) {

	if (rhs.getSign() == true)
		o << "This form <" << rhs.getName() << "> can be sign by a <" << rhs.getSign_Grade() << "> grade and execute by a <" << rhs.getExec_Grade() << "> and this form is signed.";
	else
		o << "This form <" << rhs.getName() << "> can be sign by a <" << rhs.getSign_Grade() << "> grade and execute by a <" << rhs.getExec_Grade() << "> and this form is not signed.";
	return (o);
}