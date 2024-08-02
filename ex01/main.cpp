/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:01 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/02 17:45:25 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal	*j = new Dog[5];
	const Animal	*i = new Cat[5];

	for (int i = 0; i < 8; i++)
	{
		
	}
	delete[] j;
	delete[] i;
	return 0;
}
