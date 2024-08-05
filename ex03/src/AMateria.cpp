/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:24:47 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/05 13:56:57 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/AMateria.hpp"

// Constructor

AMateria::AMateria(void)
{
	std::cout << "AMateria default Constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &cpy)
{
	std::cout << "AMateria copy Constructor called" << std::endl;
	*this = cpy;
}

AMateria::AMateria(std::string const &type)
{
	std::cout << "AMateria Constructor with type attribute called" << std::endl;
}

// Destructor

AMateria::~AMateria(void)
{
	std::cout << "AMateria default Destructor called" << std::endl;
}

// Operators

AMateria	&AMateria::operator= (AMateria const &cpy)
{
	std::cout << "AMateria copy assignment operator called" << std::endl;
	if (this != &cpy)
		std::cout << "Nothing need to copy" << std::endl;
	return (*this);
}

// Member functions

std::string const	&AMateria::getType(void) const {return (type);}

void	AMateria::use(ICharacter &target)
{
	std::cout << "Default use function" << std::endl;
}