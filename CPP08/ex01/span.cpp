/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Psaumet <psaumet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:41:51 by Psaumet           #+#    #+#             */
/*   Updated: 2021/07/04 14:24:46 by Psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"

/*
**	Default Span class
*/
Span::Span( void ) {

	std::cout << "Default Span constructor. " << std::endl;
	return ;
}

/*
**	Span constructor, take one argument
*/
Span::Span( unsigned int N ) {

	this->_nbr_item = N;
	return ;
}

/*
**	Copy Span constructor
*/
Span::Span( const Span &copy ) {

	this->_nbr_item = copy._nbr_item;
	this->_vect = copy._vect;
	return ;
}

/*
**	Span desctructor
*/
Span::~Span( void ) {

	return ;
}

/*	*******************	*/
/*	Overload's operator	*/
/*	*******************	*/

/*
**	Assignment operator " = "
*/
Span			&Span::operator=( const Span &element ) {

	if (this != &element)
	{
		this->_nbr_item = element._nbr_item;
		this->_vect = element._vect;
	}
	return (*this);
}


/*
**	Other functions member
*/
void			Span::addNumber( int i ) {

	if (this->_vect.size() == this->_nbr_item)
		throw Span::FullSpan();
	else
		this->_vect.push_back(i);
	return ;
}

int				Span::shortestSpan( void ) const {

	if (this->_vect.size() <= 1)
		throw Span::OneSpan();
	//std::cout << "test min element : " << *std::min_element(this->_vect.begin(), this->_vect.end());
	return (*std::min_element(this->_vect.begin(), this->_vect.end()));
	//return (*std::min_element(this->_vect, this->_nbr_item));
}

int				Span::longestSpan( void ) const {

	if (this->_vect.size() <= 1)
		throw Span::OneSpan();
	return (*std::max_element(this->_vect.begin(), this->_vect.end()));
}

// template<typename InputIterator>
// void			Span::addNumber_list(InputIterator begin, InputIterator end) {

// 	if (this->_vect.size() == this->_nbr_item)
// 		throw Span::FullSpan();
// 	this->_vect.insert(begin, end);

// 	(void)begin;
// 	(void)end;

// }