/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:18:59 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/30 16:23:46 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

// Constructor

Dog::Dog(void)
{
	std::cout << "Dog default Constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(std::string type)
{
	std::cout << "Dog Constructor with name attribute called" << std::endl;
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
		this->type = cpy.type;
	}
	return (*this);
}

// Member functions

void	Dog::makeSound(void) const
{
	std::cout << "Dog with the name " << type << " starts barking" << std::endl;
}