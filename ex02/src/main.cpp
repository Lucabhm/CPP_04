/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:01 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/07 09:16:14 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongAnimal.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "Test 1" << std::endl << std::endl;

	Animal	*animals[2];
	const Animal	*j = new Dog("Fia");
	const Animal	*i = new Cat("Gerry");


	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	delete j;
	delete i;

	std::cout << std::endl;
	std::cout << "Wrong output" << std::endl << std::endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat("Fia");
	const WrongAnimal* l = new WrongCat("Gerry");

	std::cout << k->getType() << " " << std::endl;
	std::cout << l->getType() << " " << std::endl;
	l->makeSound(); //will output the cat sound!
	k->makeSound();
	wrongMeta->makeSound();
	delete wrongMeta;
	delete k;
	delete l;

	std::cout << std::endl;
	std::cout << "Test 2" << std::endl << std::endl;

	for (int i = 0; i < 1; i++)
		animals[i] = new Cat;
	for (int i = 1; i < 2; i++)
		animals[i] = new Dog;
	for (int i = 0; i < 2; i ++)
		animals[i]->printBrain();
	for (int i = 0; i < 2; i++)
		delete	animals[i];
	return (0);
}
