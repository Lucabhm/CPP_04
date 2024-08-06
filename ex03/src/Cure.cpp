/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:37:21 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/06 16:46:33 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Cure.hpp"

// Constructor

Cure::Cure(void)
{
	std::cout << "Cure default Constructor called" << std::endl;
	this->AMateria::type = "cure";
}

Cure::Cure(Cure const &cpy)
{
	std::cout << "Cure copy Constructor called" << std::endl;
	*this = cpy;
}

// Destructor

Cure::~Cure(void)
{
	std::cout << "Cure default Destructor called" << std::endl;
}

// Operators

Cure	&Cure::operator= (Cure const &cpy)
{
	std::cout << "Cure copy assignment operator called" << std::endl;
	if (this != &cpy)
		this->AMateria::type = "cure";
	return (*this);
}

// Member functions

AMateria	*Cure::clone(void) const
{
	AMateria	*ret = new Cure;

	return (ret);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}