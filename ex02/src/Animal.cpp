/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:05 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/05 09:53:10 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Animal.hpp"

// Constructor

Animal::Animal(void)
{
	std::cout << "Animal default Constructor called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal Constructor with name attribute called" << std::endl;
	this->type = type;
}

Animal::Animal(Animal const &cpy)
{
	std::cout << "Animal copy Constructor called" << std::endl;
	*this = cpy;
}

// Destructor

Animal::~Animal(void)
{
	std::cout << "Animal default Destructor called" << std::endl;
}

// Operators

Animal	&Animal::operator= (Animal const &cpy)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &cpy)
	{
		this->type = cpy.type;
	}
	return (*this);
}

// Member functions

std::string	Animal::getType(void) const {return (this->type);}

void	Animal::setType(std::string type)
{
	this->type = type;
}
