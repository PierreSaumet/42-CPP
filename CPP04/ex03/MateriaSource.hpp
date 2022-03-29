/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{

	public:
		//Canonique form
		MateriaSource( void );
		~MateriaSource( void );
		MateriaSource( const MateriaSource &copy );

		// Overload operator
		MateriaSource		&operator=( const MateriaSource &element );

		// Other functions
		void				learnMateria( AMateria *m);
		AMateria*			createMateria( std::string const &type );

	private:
		AMateria			*_srcs[4];

};

#endif