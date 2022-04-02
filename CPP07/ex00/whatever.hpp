/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T>
T const &			max( T const &x, T const &y) {

	return ( x > y ? x : y);
}

template< typename T>
T const &			min( T const &x, T const &y) {

	return ( x < y ? x : y);
}

template< typename T>
void				swap( T &a, T &b) {

	T				tmp;

	tmp = a;
	a = b;
	b = tmp;
}
