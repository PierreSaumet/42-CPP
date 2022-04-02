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

#include "whatever.hpp"

int			main( void ) {

	std::cout << "Test max with int:" << std::endl;
	int a(42), b(21);
	std::cout << "Max of " << a << " and  " << b << " is ";
	std::cout << max<int>(a, b) << std::endl;					// explicit instanciation = better
	std::cout << "Max of " << a << " and  " << b << " is ";
	std::cout << max(a ,b ) << std::endl;						// implicit instanciation

	std::cout << std::endl;
	char e ='a';
	char f = 'w';
	std::cout << "Test max with char:" << std::endl;
	std::cout << "Max of " << e << " and  " << f << " is ";
	std::cout << max<char>( e, f) << std::endl;
	std::cout << "Max of " << e << " and  " << f << " is ";
	std::cout << max(e, f) << std::endl;



	std::cout << std::endl;
	std::cout << "Test min with float:" << std::endl;
	float 	c = -1.7f;
	float d = 4.2f;
	std::cout << "Min of " << c << " and  " << d << " is ";
	std::cout << min<float>( c, d) << std::endl; 
	std::cout << "MIn of " << c << " and  " << d << " is ";
	std::cout << min(c, d) << std::endl;

	std::cout << std::endl;
	std::cout << "Test min with int:" << std::endl;
	int q = -2356;
	int p = -2356;
	std::cout << "Min of " << q << " and  " << p << " is ";
	std::cout << min<float>( q, p) << std::endl; 
	std::cout << "MIn of " << q << " and  " << p << " is ";
	std::cout << min(q, p) << std::endl;


	int val1 = 42;
	int val2 = 0;
	std::cout << std::endl;
	std::cout << "Test swap with int:" << std::endl;
	std::cout << "swap of " << val1<< " and  " << val2 << " is " << std::endl;
	swap(val1, val2);
	std::cout << "swap become " << val1 << " and  " << val2 << std::endl;



	std::string val3 = "Salut c'est 1";
	std::string val4 = "Salut c'est 2";
	std::cout << std::endl;
	std::cout << "Test swap with std::string:" << std::endl;
	std::cout << "swap of val3 -" << val3 << "- and  val4 -" << val4 << "- is ..." << std::endl;
	swap(val3, val4);
	std::cout << "swap become val3 = -" << val3 << "- and val4 = -" << val4 << "-" << std::endl;



	
	return (0);
}