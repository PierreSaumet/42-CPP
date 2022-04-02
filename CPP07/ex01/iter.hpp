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
#include <ctype.h>

template< typename T>
void	iter(T *array, int length, void (*fct)(T const &elem))
{
	for (int i = 0; i < length; i++)
		fct(array[i]);
	return ;
}

template< typename T>
void	ft_display(T const &val)
{
	std::cout << val << std::endl;
	return ;
}