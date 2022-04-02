/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Psaumet <psaumet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:41:51 by Psaumet           #+#    #+#             */
/*   Updated: 2021/07/04 14:24:46 by Psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>

class Span
{
	public:
		Span( unsigned int N );
		Span( const Span &copy );
		virtual ~Span( void );

		// Overload assignment operator
		Span &operator=( const Span &element );

		// Other member functions
		void			addNumber( int i );
		template<typename InputIterator>
		void			addNumber(InputIterator begin, InputIterator end) {

			if (end - begin <= this->_nbr_item)
				std::copy(begin, end, std::back_inserter(this->_vect));
			else
			{
				throw Span::NoSpace();
			}
			std::sort(this->_vect.begin(), this->_vect.end());
		}
		int				shortestSpan( void ) const;
		int				longestSpan( void ) const;

		// Overload class exception
		class OneSpan : public std::exception
		{
			virtual const char *what() const throw() {
				
				return ("One or zero span"); };
		};

		class FullSpan : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Span is full");
			};
		};

		class NoSpace : public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Span not enough space");
			};
		};

	private:
		Span( void );

		std::vector<int>		_vect;
		unsigned int			_nbr_item;

};

#endif