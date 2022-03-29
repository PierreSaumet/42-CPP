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

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int		main( void )
{
	const Animal* meta = new Animal();
	std::cout << "the type is : " <<  meta->getType() << std::endl;
	meta->makeSound();						//will output nothing


	std::cout << std::endl;
	std::cout << std::endl;
	const Animal* i = new Cat();
	std::cout << "the type is : " <<  i->getType() << " " << std::endl;
	i->makeSound(); 						//will output the cat sound!

	std::cout << std::endl;
	std::cout << std::endl;
	const Animal* j = new Dog();
	std::cout << "the type is : " <<  j->getType() << " " << std::endl;
	j->makeSound();							//will output the dog sound

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "tests copy, operator = etc..." << std::endl;
	Animal test1, test2;
	test2 = test1;
	Animal test3 = test2;
	Cat	cat1, cat2;
	cat2 = cat1;
	Cat cat3 = cat1;
	Dog dog1, dog2;
	dog2 = dog1;
	Dog dog3 = dog1;


	std::cout << std::endl;
	std::cout << std::endl;
	std::cout <<"Test without virtual for the function makesound and destructor: " << std::endl;
	const WrongAnimal *bad_animal = new WrongAnimal();
	std::cout << "the type is : " <<  bad_animal->getType() << std::endl;
	bad_animal->makeSound();


	std::cout << std::endl;
	const WrongAnimal	*garfield = new WrongCat();
	std::cout << "the type is : " <<  garfield->getType() << " " << std::endl;
	garfield->makeSound(); 					//will output the Animal sound!

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "Attention comportement indefini, garfield a un type reel WRONG CAT et le destructor n'est pas appele car pas de virtuel" << std::endl;
	delete garfield;
	delete bad_animal;


	std::cout << std::endl;
	delete j;
	delete i;
	delete meta;
	std::cout << std::endl;
	return (0);
}