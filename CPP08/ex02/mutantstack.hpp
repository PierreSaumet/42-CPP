/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>


template <class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack( const MutantStack<T> &copy );
		~MutantStack( void );

		MutantStack<T>	&operator=( MutantStack<T> const &element );


		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin( void ) {
			return (this->c.begin());
		}
		iterator end( void ) {
			return (this->c.end());
		}

		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		const_iterator	begin( void ) const {
			return (this->c.begin());
		}
		const_iterator	end( void ) const {
			return (this->c.end());
		}

		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		reverse_iterator	rbegin( void ) {
			return (this->c.rbegin());
		}
		reverse_iterator	rend( void ) {
			return (this->c.rend());
		}

		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;
		const_reverse_iterator	rbegin( void ) const {
			return (this->c.rbegin());
		}
		const_reverse_iterator	rend( void ) const {
			return (this->c.end());
		}

	private:
};

// template <typename T>
// template MutantStack<int>::MutantStack(void) {};

#endif