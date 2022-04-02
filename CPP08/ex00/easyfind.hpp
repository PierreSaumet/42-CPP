/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Psaumet <psaumet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:41:51 by Psaumet           #+#    #+#             */
/*   Updated: 2021/07/04 14:24:46 by Psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>				// std::cout
#include <list>					// std::list
#include <algorithm>			// std::find
#include <exception>			// throw std::Exception
#include <vector>				// std::vector
#include <set>					// std::set
#include <map>					// std::map
#include <string>				//	std::string

template< typename T>
int			easyfind( T &container, int i)
{
	typename T::iterator it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw std::exception();
	return (*it);
}
