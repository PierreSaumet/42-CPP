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

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{

	public:
		// Canonique form
		PresidentialPardonForm( std::string const &target );
		virtual ~PresidentialPardonForm( void );
		PresidentialPardonForm( const PresidentialPardonForm &copy );

		// Overload Operator
		PresidentialPardonForm		&operator=( const PresidentialPardonForm &element );

	private:
		void						_do_action( void ) const;

		std::string const			_target;

};

#endif