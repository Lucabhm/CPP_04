/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:18:59 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/06 07:51:33 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

// Constructor

Dog::Dog(void)
{
	std::cout << "Dog default Constructor called" << std::endl;
	this->Animal::type = "Dog";
	this->type = "Default";
}

Dog::Dog(std::string type)
{
	std::cout << "Dog Constructor with name attribute called" << std::endl;
	this->Animal::type = "Dog";
	this->type = type;
}

Dog::Dog(Dog const &cpy)
{
	std::cout << "Dog copy Constructor called" << std::endl;
	*this = cpy;
}

// Destructor

Dog::~Dog(void)
{
	std::cout << "Dog default Destructor called" << std::endl;
}

// Operators

Dog	&Dog::operator= (Dog const &cpy)
{
	std::cout << "Dog copy assignemt operator called" << std::endl;
	if (this != &cpy)
	{
		this->Animal::type = cpy.Animal::type;
		this->type = cpy.type;
	}
	return (*this);
}

// Member functions

void	Dog::makeSound(void) const
{
	std::cout << "Dog with the name " << this->type << " starts barking" << std::endl;
}