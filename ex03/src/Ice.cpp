/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:37:24 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/05 14:04:52 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Ice.hpp"

// Constructor

Ice::Ice(void)
{
	std::cout << "Ice default Constructor called" << std::endl;
	this->AMateria::type = "ice";
}

Ice::Ice(Ice const &cpy)
{
	std::cout << "Ice copy Constructor called" << std::endl;
	*this = cpy;
}

// Destructor

Ice::~Ice(void)
{
	std::cout << "Ice default Destructor called" << std::endl;
}

// Operators

Ice	&Ice::operator= (Ice const &cpy)
{
	std::cout << "Ice copy assignment operator called" << std::endl;
	if (this != &cpy)
	{
		
	}
	return (*this);
}

// Member functions

AMateria	*Ice::clone(void) const
{
	AMateria	*ret = new Ice;
	
	*ret = *this;
	return (ret);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}