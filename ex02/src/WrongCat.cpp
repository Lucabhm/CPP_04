/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:44:15 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/03 17:25:48 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/WrongCat.hpp"

// Constructor

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default Constructor called" << std::endl;
	this->WrongAnimal::type = "Cat";
	this->type = "Default";
}

WrongCat::WrongCat(std::string type)
{
	std::cout << "WrongCat Constructor with name attribute called" << std::endl;
	this->WrongAnimal::type = "Cat";
	this->type = type;
}

WrongCat::WrongCat(WrongCat const &cpy)
{
	std::cout << "WrongCat copy Constructor called" << std::endl;
	*this = cpy;
}

// Destructor

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat default Destructor called" << std::endl;
}

// Operators

WrongCat	&WrongCat::operator= (WrongCat const &cpy)
{
	std::cout << "WrongCat copy assignemt operator called" << std::endl;
	if (this != &cpy)
	{
		this->WrongAnimal::type = cpy.WrongAnimal::type;
		this->type = cpy.type;
	}
	return (*this);
}

// Member functions

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat with the name " << type << " starts Meowing" << std::endl;
}