/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClassPhonebook.hpp"

/*
**	This file contains all definitions for the Phonebook's Class
*/

/*
**	Phonebook's constructor.
**		Puts is_setup to false.
*/
Phonebook::Phonebook( void ) {

	this->_is_setup = false;
    return ;
}

/*
**	Phonebook's copy of constructor
**		Not used.
*/
Phonebook::Phonebook( const Phonebook& copy) {

	_is_setup = true;
	_first_name = copy._first_name;
	_last_name = copy._last_name;
	_nickname = copy._nickname;
	_login = copy._login;
	_postal_address = copy._postal_address;
	_email_address = copy._email_address;
	_phone_number = copy._phone_number;
	_birthday_date = copy._birthday_date;
	_favorite_meal = copy._favorite_meal;
	_underwear_color = copy._underwear_color;
	_darkest_secret = copy._darkest_secret;
	return ;
}

/*
**	Phonebook's destructor
*/
Phonebook::~Phonebook( void ) {

    return ;
}

/*
**	Phonebook's operator assignment
**		if the instance is different, assigned it and returns it
*/
Phonebook &Phonebook::operator=( const Phonebook& element) {

	if (this !=  &element)
	{
		this->_is_setup = element._is_setup;
		this->_first_name = element._first_name;
		this->_last_name = element._last_name;
		this->_nickname = element._nickname;
		this->_login = element._login;
		this->_postal_address = element._postal_address;
		this->_phone_number = element._phone_number;
		this->_birthday_date = element._birthday_date;
		this->_favorite_meal = element._favorite_meal;
		this->_underwear_color = element._underwear_color;
		this->_darkest_secret = element._darkest_secret;
		return (*this);
	}
	else
		return (*this);
}


/*	************************************************	*/
/*	The following functions don't have specific role	*/
/*	************************************************	*/

/*
**	Return the value of is_setup (1 or 0)
*/
bool		Phonebook::ret_is_setup( void ) {
	return (this->_is_setup);
}

/*
**	Display all the private variables
*/
void		Phonebook::ft_display_contacts( void ) {

	std::cout << "First Name: " <<  this->_first_name << std::endl;
	std::cout << "Last Name: " << this->_last_name << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Postal Address: " << this->_postal_address << std::endl;
	std::cout << "Email Address: " << this->_email_address << std::endl;
	std::cout << "Phone Number: " << this->_phone_number << std::endl;
	std::cout << "Birthday Date: " << this->_birthday_date << std::endl;
	std::cout << "Favorite Meal: " << this->_favorite_meal << std::endl;
	std::cout << "Underwear Color: " << this->_underwear_color << std::endl;
	std::cout << "Darkest Secret: " << this->_darkest_secret << std::endl;
	std::cout << std::endl;
}

/*	***********************************************	*/
/*	The following functions setup private variables	*/
/*	***********************************************	*/

/*
**	Setup the private variable _first_name.
*/
void		Phonebook::set_first_name( const std::string first_name )
{
	this->_first_name = first_name;
}

/*
**	Setup the private variable _last_name.
*/
void		Phonebook::set_last_name( const std::string last_name )
{
	this->_last_name = last_name;
}

/*
**	Setup the private variable _nickname.
*/
void		Phonebook::set_nickname( const std::string nickname )
{
	this->_nickname = nickname;
}

/*
**	Setup the private variable _login.
*/
void		Phonebook::set_login( const std::string login )
{
	this->_login = login;
}
/*
**	Setup the private variable _postal_address.
*/
void		Phonebook::set_postal_address( const std::string postal_address )
{
	this->_postal_address = postal_address;
}

/*
**	Setup the private variable _email_address.
*/
void		Phonebook::set_email_address( const std::string email_address )
{
	this->_email_address = email_address;
}

/*
**	Setup the private variable _phone_number.
*/
void		Phonebook::set_phone_number( const std::string phone_number )
{
	this->_phone_number = phone_number;
}

/*
**	Setup the private variable _birthday_date.
*/
void		Phonebook::set_birthday_date( const std::string birthday_date )
{
	this->_birthday_date = birthday_date;
}

/*
**	Setup the private variable _favorite_meal.
*/
void		Phonebook::set_favorite_meal( const std::string favorite_meal )
{
	this->_favorite_meal = favorite_meal;
}

/*
**	Setup the private variable _underwear_color.
*/
void		Phonebook::set_underwear_color( const std::string underwear_color )
{
	this->_underwear_color = underwear_color;
}

/*
**	Setup the private variable _birthday_date.
*/
void		Phonebook::set_darkest_secret( const std::string darkest_secret )
{
	this->_darkest_secret = darkest_secret;
}


/*	*************************************************	*/
/*	The following functions display private variables	*/
/*	*************************************************	*/

/*
**	Displays the private variable _first_name
*/
const std::string	Phonebook::get_first_name( void )
{
	return (this->_first_name);
}

/*
**	Displays the private variable _last_name
*/
const std::string	Phonebook::get_last_name( void )
{
	return (this->_last_name);
}

/*
**	Displays the private variable _nickname
*/
const std::string	Phonebook::get_nickname( void )
{
	return (this->_nickname);
}

/*
**	Displays the private variable _first_name
*/
const std::string	Phonebook::get_login( void )
{
	return (this->_login);
}

/*
**	Displays the private variable _postal_address
*/
const std::string	Phonebook::get_postal_address( void )
{
	return (this->_postal_address);
}

/*
**	Displays the private variable _email_address
*/
const std::string	Phonebook::get_email_address( void )
{
	return (this->_email_address);
}

/*
**	Displays the private variable _phone_number
*/
const std::string	Phonebook::get_phone_number( void )
{
	return (this->_phone_number);
}

/*
**	Displays the private variable _birthday_date
*/
const std::string	Phonebook::get_birthday_date( void )
{
	return (this->_birthday_date);
}

/*
**	Displays the private variable _favorite_meal
*/
const std::string	Phonebook::get_favorite_meal( void )
{
	return (this->_favorite_meal);
}

/*
**	Displays the private variable _underwear_color
*/
const std::string	Phonebook::get_underwear_color( void )
{
	return (this->_underwear_color);
}

/*
**	Displays the private variable _darkest_secret
*/
const std::string	Phonebook::get_darkest_secret( void )
{
	return (this->_darkest_secret);
}


/*	*********************************************************	*/
/*	This function asks the user to enter several informations	*/
/*	and then used the associated functions						*/
/*	*********************************************************	*/

void		Phonebook::ft_add_contact( void )
{
	std::string	input;
	std::string	contact_informations[11] = {
		"first_name",
		"last_name",
		"nickname",
		"login",
		"postal_address",
		"email_address",
		"phone_number",
		"birthday_address",
		"favorite_meal",
		"underwear_color",
		"darkest_secret"
	};

	for (int i = 0; i < 11; i++)
	{
		std::cout << contact_informations[i] << " : ";
		getline(std::cin, input);
		(i == 0) ? this->set_first_name(input) : (void)0;
		(i == 1) ? this->set_last_name(input) : (void)0;
		(i == 2) ? this->set_nickname(input) : (void)0;
		(i == 3) ? this->set_login(input) : (void)0;
		(i == 4) ? this->set_postal_address(input) : (void)0;
		(i == 5) ? this->set_email_address(input) : (void)0;
		(i == 6) ? this->set_phone_number(input) : (void)0;
		(i == 7) ? this->set_birthday_date(input) : (void)0;
		(i == 8) ? this->set_favorite_meal(input) : (void)0;
		(i == 9) ? this->set_underwear_color(input) : (void)0;
		(i == 10) ? this->set_darkest_secret(input) : (void)0;
	}
	this->_is_setup = true;
	//this->_is_setup;
	return ;
}