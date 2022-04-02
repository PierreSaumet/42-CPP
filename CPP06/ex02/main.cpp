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

# include <iostream>
# include <time.h>
# include <stdlib.h>
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"


Base		*generate( void )
{
	int		i;

	i = rand() % 100;
	if (i < 33)
		return (new A);
	else if (i < 66)
		return (new B);
	else
		return (new C);
}

void		identify(Base *p)
{
	std::cout << "*";
	if (dynamic_cast<A*>(p))
	{
		std::cout << "A";
		return ;
	}
	if (dynamic_cast<B*>(p))
	{
		std::cout << "B";
		return ;
	}
	if (dynamic_cast<C*>(p))
	{
		std::cout << "C";
		return ;
	}
	return ;
}

void		identify(Base &p)
{
	//identify(&p);
	std::cout << "&";
	try {
		(void) dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (std::exception & e)
	{}
	try {
		(void) dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (std::exception & e)
	{}
	try {
		(void) dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (std::exception & e)
	{}
	return ;
}

int		main( void ) 
{
	srand (time(NULL));

	Base	*test_1 = generate();
	identify(test_1);
	identify(*test_1);

	Base	*test_2 = generate();
	identify(test_2);
	identify(*test_2);

	delete test_2;
	delete test_1;

	for (int i = 0; i < 50; i++)
	{
		Base	*test = generate();
		std::cout << "Instance numero " << i << ": ";
		identify(test);
		std::cout << " , ";
		identify(*test);
		std::cout << std::endl;
		delete test;
	}

	A test_a;
	B test_b;
	C test_c;
	identify(test_a);
	identify(test_b);
	identify(test_c);

	std::cout << std::endl;
	Base *test_aa = new A();
	Base *test_bb = new B();
	Base *test_cc = new C();
	identify(test_aa);
	identify(test_bb);
	identify(test_cc);

	delete test_aa;
	delete test_bb;
	delete test_cc;
	return (0);
}