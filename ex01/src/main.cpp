/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:01 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/06 15:59:51 by lbohm            ###   ########.fr       */
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
	return (0);
}
