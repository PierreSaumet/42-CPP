/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
**	MateriaSource's default constructor
*/
MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_srcs[i] = NULL;
}


/*
**	MateriaSource's destructor
*/
MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_srcs[i] != NULL)
			delete this->_srcs[i];
}

/*
**	MateriaSource's copy constructor
*/
MateriaSource::MateriaSource(const MateriaSource& copy)
{
	for (int i = 0; i < 4; i++)
		if (copy._srcs[i])
			this->_srcs[i] = copy._srcs[i];
}


/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
MateriaSource & MateriaSource::operator=(const MateriaSource& op)
{
	if (this == &op)
		return (*this);
	for (int i = 0; i < 4; i++)
		if (op._srcs[i])
			this->_srcs[i] = op._srcs[i];
	return (*this);
}



/*	*******************	*/
/*	Other functions 	*/
/*	*******************	*/

void			MateriaSource::learnMateria(AMateria *m)
{
	int	i = 0;
	if ( m == NULL)
		return ;
	for (i = 0; i < 4 && this->_srcs[i] != NULL; i++)
		if (this->_srcs[i] == m)
			return ;
	if (i < 4)
		this->_srcs[i] = m;
}

AMateria*		MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (this->_srcs[i] != NULL
			&& this->_srcs[i]->getType() == type)
		{
				return (this->_srcs[i]->clone());
		}

	return (NULL);
}