/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include <ios>
#include <string>
#include <stdlib.h>

class Phonebook {

    public:
		
        Phonebook( void );									// Constructor
		Phonebook( const Phonebook& );						// Copy constructor
        ~Phonebook( void );									// Destructor
		Phonebook &operator=( const Phonebook& element);	// Copy assignement operator

		
		/*
		**	All these functions setup all the private's variables.
		*/
		void					set_first_name( const std::string first_name );
		void					set_last_name( const std::string last_name );
		void					set_nickname( const std::string nickname );
		void					set_login( const std::string login );
		void					set_postal_address( const std::string postal_address );
		void					set_email_address( const std::string email_address );
		void					set_phone_number( const std::string phone_number );
		void					set_birthday_date( const std::string birthday_date );
		void					set_favorite_meal( const std::string favorite_meal );
		void					set_underwear_color( const std::string underwear_color );
		void					set_darkest_secret( const std::string darkest_secret );

		/*
		**	All these functions displays the associated variable
		*/
		const std::string		get_first_name( void );
		const std::string		get_last_name( void );
		const std::string		get_nickname( void );
		const std::string		get_login( void );
		const std::string		get_postal_address( void );
		const std::string		get_email_address( void );
		const std::string		get_phone_number( void );
		const std::string		get_birthday_date( void );
		const std::string		get_favorite_meal( void );
		const std::string		get_underwear_color( void );
		const std::string		get_darkest_secret( void );
	
		/*
		**	Others functins.
		*/
		void					ft_add_contact( void );
		void					ft_display_contacts( void );
		bool					ret_is_setup( void );

	private:
		bool			_is_setup;
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_login;
		std::string		_postal_address;
		std::string		_email_address;
		std::string		_phone_number;
		std::string		_birthday_date;
		std::string		_favorite_meal;
		std::string		_underwear_color;
		std::string		_darkest_secret;	
};
#endif
