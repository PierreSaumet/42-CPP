/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

/*
**	Default constructor
*/
template<class T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
	return ;
}

template<class T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}

template<class T>
MutantStack<T>::MutantStack( const MutantStack<T> &copy ) : std::stack<T>(copy) 
{
	return ;
}

template<class T>
MutantStack<T> &MutantStack<T>::operator=( MutantStack<T> const &element )
{
	this->c = element.c;
	return (*this);
}

