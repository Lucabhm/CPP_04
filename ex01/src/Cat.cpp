/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:09 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/07 10:33:14 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cat.hpp"

// Constructor

Cat::Cat(void)
{
	std::cout << "Cat default Constructor called" << std::endl;
	this->Animal::type = "Cat";
	this->type = "Default";
	this->CatBrain = new Brain;
	this->pos = 3;
}

Cat::Cat(std::string type)
{
	std::cout << "Cat Constructor with name attribute called" << std::endl;
	this->Animal::type = "Cat";
	this->type = type;
	this->CatBrain = new Brain;
	this->pos = 3;
}

Cat::Cat(Cat const &cpy)
{
	std::cout << "Cat copy Constructor called" << std::endl;
	this->Animal::type = cpy.Animal::type;
	this->type = cpy.type;
	this->CatBrain = new Brain(*cpy.CatBrain);
	this->pos = cpy.pos;
}

// Destructor

Cat::~Cat(void)
{
	std::cout << "Cat default Destructor called" << std::endl;
	delete	this->CatBrain;
}

// Operators

Cat	&Cat::operator= (Cat const &cpy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &cpy)
	{
		this->Animal::type = cpy.Animal::type;
		this->type = cpy.type;
		if (this->CatBrain)
			delete this->CatBrain;
		this->CatBrain = new Brain(*cpy.CatBrain);
	}
	return (*this);
}

// Member functions

void	Cat::makeSound(void) const
{
	std::cout << "Cat with the name " << type << " starts Meowing" << std::endl;
}

void	Cat::printBrain(void) const
{
	CatBrain->printIdeas();
}

void	Cat::addIdea(std::string const &idea)
{
	if (pos < 100)
	{
		CatBrain->addIdea(pos, idea);
		pos++;
	}
}