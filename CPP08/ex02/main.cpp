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

#include "mutantstack.hpp"
#include "mutantstack.cpp"

/*
**	
**	clang++ -Wall -Werror -Wextra -o main main.cpp mutantstack.cpp && ./main
**
*/

int	main(void)
{
	MutantStack<int>	mstack2;

	std::cout << " Test with classic functions : " << std::endl;
	std::cout << "empty = " << mstack2.empty() << std::endl;
	std::cout << "push 5" << std::endl;
	mstack2.push(5);
	std::cout << "push 50" << std::endl;
	mstack2.push(50);
	std::cout << "size = "  << mstack2.size() << std::endl;
	std::cout << "top = " << mstack2.top() << std::endl;
	std::cout << "pop 50" << std::endl;
	mstack2.pop();
	std::cout << "size = "  << mstack2.size() << std::endl;
	std::cout << "top = " << mstack2.top() << std::endl;
	std::cout << "push 50" << std::endl;
	mstack2.push(50);
	std::cout << "empty = " << mstack2.empty() << std::endl;
	std::cout << std::endl;


	std::cout << "Test copy constructor:" << std::endl;
	MutantStack<int> 	mstack_copy = mstack2;
	std::cout << "size = "  << mstack_copy.size() << std::endl;

	std::cout << std::endl;
	std::cout << "test assignment operator: " << std::endl;
	MutantStack<int>	mstack_assignment;
	mstack_assignment = mstack2;
	std::cout << "size = " << mstack_assignment.size() << std::endl;
	std::cout << std::endl;

	{
		MutantStack<int>	mstack_first_iterator;
		std::cout << "mstack adding 5, 21, 42, 0, 36, 99, 666:" << std::endl;
		mstack_first_iterator.push(5);
		mstack_first_iterator.push(21);
		mstack_first_iterator.push(42);
		mstack_first_iterator.push(0);
		mstack_first_iterator.push(36);
		mstack_first_iterator.push(99);
		mstack_first_iterator.push(666);

		MutantStack<int>::iterator it_begin = mstack_first_iterator.begin();
		MutantStack<int>::iterator it_end = mstack_first_iterator.end();

		std::cout << "Test move iterator: " << std::endl;
		std::cout << *it_begin << std::endl;
		++it_begin;
		std::cout << *it_begin << std::endl;
		--it_begin;
		std::cout << *it_begin << std::endl;

		std::cout << "Mstack content:" << std::endl;
		while (it_begin != it_end)
		{
			std::cout << *it_begin;
			if (++it_begin == it_end)
				std::cout << std::endl;
			else
				std::cout << ", ";
		}
	}


	MutantStack<int>::const_iterator it_const = mstack2.begin();
	MutantStack<int>::const_iterator itend_const = mstack2.end();
	++it_const;
	--it_const;
	std::cout << "mstack2 const content: " << std::endl;
	while(it_const != itend_const)
	{
		std::cout << *it_const;
		if (++it_const == itend_const)
			std::cout << std::endl;
		else
			std::cout << ", ";
	}

	MutantStack<int>::reverse_iterator it_reverse = mstack2.rbegin();
	MutantStack<int>::reverse_iterator ite_reverse = mstack2.rend();
	++it_reverse;
	--it_reverse;
	std::cout << "mstack2 reverse content: " << std::endl;
	while(it_reverse != ite_reverse)
	{
		std::cout << *it_reverse;
		if (++it_reverse == ite_reverse)
			std::cout << std::endl;
		else
			std::cout << ", ";
	}

	MutantStack<int>::const_reverse_iterator it_const_reverse = mstack2.rbegin();
	MutantStack<int>::const_reverse_iterator ite_const_reverse = mstack2.rend();
	++it_const_reverse;
	--it_const_reverse;
	std::cout << "mstack2 const reverse content: " << std::endl;
	while(it_const_reverse != ite_const_reverse)
	{
		std::cout << *it_const_reverse;
		if (++it_const_reverse == ite_const_reverse)
			std::cout << std::endl;
		else
			std::cout << ", ";
	}


	MutantStack<char>	mstack3;

	std::cout << " Test with classic functions : " << std::endl;
	std::cout << "empty = " << mstack3.empty() << std::endl;
	std::cout << "push a" << std::endl;
	mstack3.push('a');
	std::cout << "push b" << std::endl;
	mstack3.push('b');
	std::cout << "size = "  << mstack3.size() << std::endl;
	std::cout << "top = " << mstack3.top() << std::endl;
	std::cout << "pop b" << std::endl;
	mstack3.pop();
	std::cout << "size = "  << mstack3.size() << std::endl;
	std::cout << "top = " << mstack3.top() << std::endl;
	std::cout << "push c" << std::endl;
	mstack3.push('c');
	std::cout << "empty = " << mstack3.empty() << std::endl;
	std::cout << std::endl;


		MutantStack<std::string>	mstack4;
	std::cout << " Test with classic functions : " << std::endl;
	std::cout << "empty = " << mstack4.empty() << std::endl;
	std::cout << "push -salut je suis le premier-" << std::endl;
	mstack4.push("Salut je suis le premier");
	std::cout << "push -salut je suis le second-" << std::endl;
	mstack4.push("Salut je suis le second");
	std::cout << "size = "  << mstack4.size() << std::endl;
	std::cout << "top = " << mstack4.top() << std::endl;
	std::cout << "pop le deuxieme element" << std::endl;
	mstack4.pop();
	std::cout << "size = "  << mstack4.size() << std::endl;
	std::cout << "top = " << mstack4.top() << std::endl;
	std::cout << "push -je suis encore le second-" << std::endl;
	mstack4.push("je suis encore le second");
	std::cout << "empty = " << mstack4.empty() << std::endl;
	std::cout << std::endl;
}