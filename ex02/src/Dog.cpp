/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:18:59 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/07 09:07:59 by lbohm            ###   ########.fr       */
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
	this->pos = 3;
}

Dog::Dog(std::string type)
{
	std::cout << "Dog Constructor with name attribute called" << std::endl;
	this->Animal::type = "Dog";
	this->type = type;
	this->DogBrain = new Brain;
	this->pos = 3;
}

Dog::Dog(Dog const &cpy)
{
	std::cout << "Dog copy Constructor called" << std::endl;
	this->Animal::type = cpy.Animal::type;
	this->type = cpy.type;
	this->DogBrain = new Brain(*cpy.DogBrain);
	this->pos = cpy.pos;
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

void	Dog::addIdea(std::string const &idea)
{
	if (pos < 100)
	{
		DogBrain->addIdea(pos, idea);
		pos++;
	}
}
