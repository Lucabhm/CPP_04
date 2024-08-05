/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 12:55:22 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/05 14:01:32 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Character.hpp"
#include "../include/AMateria.hpp"

// Constructor

Character::Character(void)
{
	std::cout << "Character default Constructor called" << std::endl;
	this->name = "Default";
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(std::string name)
{
	std::cout << "Character Constructor with name attribute called" << std::endl;
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
}

Character::Character(Character const &cpy)
{
	std::cout << "Character copy Constructor called" << std::endl;
	*this = cpy;
}

// Destructor

Character::~Character(void)
{
	std::cout << "Character default Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete this->inventory[i];
	}
}

// Operators

Character	&Character::operator= (Character const &cpy)
{
	std::cout << "Character copy assignment operator called" << std::endl;
	if (this != &cpy)
	{
		this->name = cpy.name;
		for (int i = 0; i < 4; i++)
			this->inventory[i] = cpy.inventory[i];
	}
	return (*this);
}

// Member functions

std::string const	&Character::getName(void) const {return (this->name);}

void	Character::equip(AMateria *m)
{
	static int	i = 0;

	if (i < 4)
	{
		this->inventory[i] = m;
		i++;
	}
}

void	Character::unequip(int idx)
{
	this->inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{
	this->inventory[idx]->use(target);
}