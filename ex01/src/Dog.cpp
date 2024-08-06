/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:18:59 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/06 15:37:17 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Dog.hpp"

// Constructor

Dog::Dog(void)
{
	std::cout << "Dog default Constructor called" << std::endl;
	this->Animal::type = "Dog";
	this->type = "Default";
	this->DogBrain = new Brain;
}

Dog::Dog(std::string type)
{
	std::cout << "Dog Constructor with name attribute called" << std::endl;
	this->Animal::type = "Dog";
	this->type = type;
	this->DogBrain = new Brain;
}

Dog::Dog(Dog const &cpy)
{
	std::cout << "Dog copy Constructor called" << std::endl;
	this->Animal::type = cpy.Animal::type;
	this->type = cpy.type;
	this->DogBrain = new Brain(*cpy.DogBrain);
}

// Destructor

Dog::~Dog(void)
{
	std::cout << "Dog default Destructor called" << std::endl;
	delete	this->DogBrain;
}

// Operators

Dog	&Dog::operator= (Dog const &cpy)
{
	std::cout << "Dog copy assignemt operator called" << std::endl;
	if (this != &cpy)
	{
		this->type = cpy.type;
		if (this->DogBrain)
			delete this->DogBrain;
		this->DogBrain = new Brain(*cpy.DogBrain);
	}
	return (*this);
}

// Member functions

void	Dog::makeSound(void) const
{
	std::cout << "Dog with the name " << this->type << " starts barking" << std::endl;
}

void	Dog::printBrain(void) const
{
	DogBrain->printIdeas();
}