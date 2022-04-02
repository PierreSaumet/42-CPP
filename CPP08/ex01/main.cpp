/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Psaumet <psaumet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 15:41:51 by Psaumet           #+#    #+#             */
/*   Updated: 2021/07/04 14:24:46 by Psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "span.hpp"
# include <time.h>

/*
**	clang++ -Wall -Werror -Wextra -o main main.cpp span.cpp && ./main
*/
int			main( void )
{
	std::cout << "Test with copy constructor:" << std::endl;
	Span	test_1(3);
	test_1.addNumber(100);
	test_1.addNumber(101);
	test_1.addNumber(102);
	Span	copy_constructor = test_1;
	std::cout << "Copy constructor shortest : " << copy_constructor.shortestSpan() << std::endl;

	std::cout << "Test with assignment copy:" << std::endl;
	Span		assignment(3);
	assignment = test_1;
	std::cout << "Assignment shortest : " << assignment.shortestSpan() << std::endl;
	assignment = copy_constructor;
	std::cout << "Assignment lonmguest : " << assignment.longestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;
	Span	test_two(2);
	std::cout << "Test adding 3 span in a 2 span's instance: " << std::endl;
	try {
		test_two.addNumber(12);
		test_two.addNumber(21);
		test_two.addNumber(42);
	}
	catch( const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Test with a 10 span : " << std::endl;
	Span		test_ten(10);

	test_ten.addNumber(8);
	test_ten.addNumber(7);
	test_ten.addNumber(0);
	test_ten.addNumber(2);
	test_ten.addNumber(4);
	std::cout << "Longuest = : " << test_ten.longestSpan() << std::endl;
	std::cout << "Smallest = : " << test_ten.shortestSpan() << std::endl;
	test_ten.addNumber(-3);
	test_ten.addNumber(30);
	std::cout << "Longuest = : " << test_ten.longestSpan() << std::endl;
	std::cout << "Smallest = : " << test_ten.shortestSpan() << std::endl;
	test_ten.addNumber(90);
	test_ten.addNumber(-5);
	std::cout << "Longuest = : " << test_ten.longestSpan() << std::endl;
	std::cout << "Smallest = : " << test_ten.shortestSpan() << std::endl;


	std::cout << std::endl;
	std::cout << std::endl;
	Span	two_same(2);
	std::cout << " test two sane = 5 5 : " << std::endl;
	two_same.addNumber(5);
	two_same.addNumber(5);
	std::cout << "Longuest = : " << two_same.longestSpan() << std::endl;
	std::cout << "Smallest = : " << two_same.shortestSpan() << std::endl;


		std::cout << std::endl;
	std::cout << std::endl;
	Span		test_empty(0);
	try {
		std::cout << " Test empty span: " << std::endl;
		test_empty.shortestSpan();
	}
	catch( const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}
	try {
		std::cout << " Test empty span: " << std::endl;
		test_empty.longestSpan();
	}
	catch( const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Test with big big Span 30 000: " << std::endl;
	Span		test_30k = Span(30000);
			srand(time(NULL));
	for(int i = 0; i < 3; i++)
	{
		std::vector<int> tmp;

		for (int y = 0; y < 10000; y++)
			tmp.push_back(rand() % 1500000);

		test_30k.addNumber(tmp.begin(), tmp.end());


		if (i == 0 || i == 1 || i == 2)
		{
			std::cout << " i = : " << i << std::endl;
			std::cout << "Shortest of big test : " << test_30k.shortestSpan() << std::endl;
			std::cout << "Longuest of big test : " << test_30k.longestSpan() << std::endl;
		}
	}

	std::cout << std::endl;
	std::cout << "Test copy big big 30k : " << std::endl;
	Span  relou = test_30k;
	std::cout << "Shortest of test_30k : " << test_30k.shortestSpan() << std::endl;
	std::cout << "Shortest of relou : " << relou.shortestSpan() << std::endl;
	std::cout << "longuest of test_30k : " << test_30k.longestSpan() << std::endl;
	std::cout << "longuest of relou : " << relou.longestSpan() << std::endl;

	std::cout << "Test assignemnt big big 30k : " << std::endl;
	Span  relou_2(30000);
	relou_2 = test_30k;
	std::cout << "Shortest of test_30k: " << test_30k.shortestSpan() << std::endl;
	std::cout << "Shortest of relou_2 : " << relou_2.shortestSpan() << std::endl;
	std::cout << "longuest of test_30k : " << test_30k.longestSpan() << std::endl;
	std::cout << "longuest of relou_2 : " << relou_2.longestSpan() << std::endl;

	return (0);
}