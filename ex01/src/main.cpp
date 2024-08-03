/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:01 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/03 17:37:49 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"
#include "../include/Dog.hpp"

int main()
{
	Animal	*test[2];

	for (int i = 0; i < 1; i++)
		test[i] = new Cat;
	for (int i = 1; i < 2; i++)
		test[i] = new Dog;
	for (int i = 0; i < 2; i++)
		delete	test[i];
	return (0);
}
