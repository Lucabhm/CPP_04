/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:01 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/03 17:34:42 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"
#include "../include/WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog("Fia");
	const Animal* i = new Cat("Gerry");

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
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
	return 0;
}
