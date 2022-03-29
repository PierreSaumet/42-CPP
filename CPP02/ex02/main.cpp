/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
**	clang++ -Wall -Werror -Wextra -std=c++98 -o fixed Fixed.cpp && ./fixed 
*/
int			main( void )
{
	Fixed		a;
	Fixed const b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);

	a = Fixed(1234.4321f);

	std::cout << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	if (c > b)
		std::cout << c << " is superior to " << b << std::endl << "c is superior to b" << std::endl;
	std::cout << std::endl;
	if (b < c)
		std::cout << b << " is inferior to " << c << std::endl << "b is inferior to c" << std::endl;
	std::cout << std::endl;
	if (b >= d)
		std::cout << b << " is superior or equal to " << d << std::endl << "b is superior or equal to d" << std::endl;
	std::cout << std::endl;
	if (c <= a)
		std::cout << c << " is inferior or equal to " << a << std::endl << "a is inferior or equal to c" << std::endl;
	std::cout << std::endl;
	if (b == d)
		std::cout << b << " is equal to " << d << std::endl << "b is equal to d" << std::endl;
	std::cout << std::endl;
	if (a != c)
		std::cout << a << " is different to " << c << std::endl << "a is equal to c" << std::endl;
	std::cout << std::endl;


	 std::cout << "b + c = " << b + c << std::endl;
	std::cout << "c - b = " << c - b << std::endl;
	std::cout << "b * b = " << b * b << std::endl;
	std::cout << "b / b = " << b / b << std::endl;

	Fixed e;
	Fixed const f(Fixed(5.05f) * Fixed(2));
	std::cout << e << std::endl;
	std::cout << ++e << std::endl;
	std::cout << e << std::endl;
	std::cout << e++ << std::endl;
	std::cout << e << std::endl;

	std::cout << f << std::endl;
	std::cout << Fixed::max(e, f) << std::endl;

	Fixed h(48.687f);
	Fixed j(Fixed(8.14f) * Fixed(2));
	std::cout << "At the beginning : " << h << std::endl;
	std::cout << "inc then use: " << ++h << std::endl;
	std::cout << "display : " << h << std::endl;
	std::cout << "use and inc : " << h++ << std::endl;
	std::cout << "display : " << h << std::endl;

	std::cout << j << std::endl;
	std::cout << Fixed::max(h, j) << std::endl;
	std::cout << Fixed::min(a, b) << std::endl;
	return (0);
}
