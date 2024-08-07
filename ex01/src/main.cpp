/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:01 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/07 09:09:50 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int main(void)
{
	Animal	*animals[6];

	for (int i = 0; i < 3; i++)
		animals[i] = new Cat;
	for (int i = 3; i < 6; i++)
		animals[i] = new Dog;
	for (int i = 0; i < 6; i++)
		animals[i]->printBrain();
	for (int i = 0; i < 6; i++)
		delete	animals[i];

	std::cout << std::endl;
	std::cout << "Test for Cat deep copy" << std::endl << std::endl;

	Cat	a("Gerry");
	Cat	b("Fia");

	a.addIdea("Hallo was geht ab");
	b = a;
	b.printBrain();
	b.addIdea("Wtf");
	a.printBrain();
	b.printBrain();

	std::cout << std::endl;
	std::cout << "Test for Dog deep copy" << std::endl << std::endl;

	{
		Dog	a("Gerry");
		Dog	b("Fia");

		a.addIdea("Hallo was geht ab");
		b = a;
		b.printBrain();
		b.addIdea("Wtf");
		a.printBrain();
		b.printBrain();
	}
	return (0);
}
