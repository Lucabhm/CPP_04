/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:09 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/30 16:23:27 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

// Constructor

Cat::Cat(void)
{
	std::cout << "Cat default Constructor called" << std::endl;
	this->type = "Cat";
}

Cat::Cat(std::string type)
{
	std::cout << "Cat Constructor with name attribute called" << std::endl;
	Animal::setType(type);
}

Cat::Cat(Cat const &cpy)
{
	std::cout << "Cat copy Constructor called" << std::endl;
	*this = cpy;
}

// Destructor

Cat::~Cat(void)
{
	std::cout << "Cat default Destructor called" << std::endl;
}

// Operators

Cat	&Cat::operator= (Cat const &cpy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &cpy)
		this->type = cpy.type;
	return (*this);
}

// Member functions

void	Cat::makeSound(void) const
{
	std::cout << "Cat with the name " << type << " starts Meowing" << std::endl;
}