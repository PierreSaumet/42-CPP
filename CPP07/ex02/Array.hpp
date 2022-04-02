/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>

template< typename T>
class Array
{

	public:
		Array( void ) : _ptr(new T[0]()), _nbr(0) {};
		Array( unsigned int n ) : _ptr(NULL), _nbr(n) {

			this->_ptr = new T[n]();
			return ;
		};
		virtual ~Array( void ) {

			if (this->_nbr >= 0)
				delete[] this->_ptr;
			return ;
		};
		Array( const Array &copy ) {
			if (copy._nbr >= 0)
			{
				this->_ptr = new T[copy._nbr]();
				this->_nbr = copy.size();
				for (int i = 0; i < copy._nbr; i++)
					this->_ptr[i] = copy._ptr[i];
			}
			return ;
		}

		// Assignment operator
		Array		&operator=( const Array &element ) {
			
			if (this->_nbr >= 0)
				delete[] this->_ptr;
			this->_ptr = NULL;
			this->_nbr = element.size();
			if (element._nbr > 0)
			{
				this->_ptr = new T[element._nbr]();
				for (int i = 0; i < element._nbr; i++)
					this->_ptr[i] = element._ptr[i];
			}
			return (*this);
		};

		//	Array operator
		T			&operator[](int i) {
			if ((i >= this->_nbr) || (i < 0))
				throw std::exception();
			return (this->_ptr[i]);
		};
		T const	&operator[](int i) const {
			if ((i >= this->_nbr) || (i < 0))
				throw std::exception();
			return (this->_ptr[i]);
		}
		
		int			size( void ) const {return (this->_nbr); }

	private:
		T			*_ptr;
		int			_nbr;
};