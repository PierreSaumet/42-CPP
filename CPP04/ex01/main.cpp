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
# include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"
# include "WrongAnimal.hpp"
# include "WrongCat.hpp"
# include "Brain.hpp"

int		main( void )
{
	std::cout << "Test with a simple cat:" << std::endl;
	const Animal *j = new Cat();
	
	std::cout << "Sound of a cat: ";
	j->makeSound();
	delete j;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Test with assignment operator =: " << std::endl;
	Cat test1, test2;
	std::cout << std::endl;
	test2 = test1;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Test with copy constructor =: " << std::endl;
	Cat test3 = test1;



	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Test with a simple dog:" << std::endl;
	const Animal *i = new Dog();
	
	std::cout << "Sound of a dog: ";
	i->makeSound();
	delete i;

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "Test with assignment operator =: " << std::endl;
	Dog dog1, dog2;
	std::cout << std::endl;
	dog2 = dog1;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Test with copy constructor =: " << std::endl;
	Dog dog3 = dog1;

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Create 20 animals" << std::endl;
	const Animal *ultime[20];
	int chien = 0;
	int chat = 0;
	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
		{
			ultime[i] = new Dog();
			chien++;
		}
		else
		{
			ultime[i] = new Cat();
			chat++;
		}
	}
	std::cout << "we have created : " << chien << " dogs and " << chat << " cats " << std::endl;
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Delete 20 animals" << std::endl;
	for (int i = 0; i < 20; i++)
	{
		ultime[i]->getType();
		std::cout << std::endl;
		delete ultime[i];
	}
	return (0);
}