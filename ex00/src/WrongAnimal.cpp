/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:55:49 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/06 07:52:01 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongAnimal.hpp"

// Constructor

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default Constructor called" << std::endl;
	this->type = "Animal";
}

WrongAnimal::WrongAnimal(WrongAnimal const &cpy)
{
	std::cout << "WrongAnimal copy Constructor called" << std::endl;
	*this = cpy;
}

// Destructor

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal default Destructor called" << std::endl;
}

// Operators

WrongAnimal	&WrongAnimal::operator= (WrongAnimal const &cpy)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	if (this != &cpy)
	{
		this->type = cpy.type;
	}
	return (*this);
}

// Member functions

std::string	WrongAnimal::getType(void) const {return (this->type);}


void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal make a sound" << std::endl;
}