/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:35:04 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/05 16:30:34 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/MateriaSource.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"

// Constructor

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource default Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->invertory[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &cpy)
{
	std::cout << "MateriaSource copy Constructor called" << std::endl;
	*this = cpy;
}

// Destructor

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource default Destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->invertory[i])
			delete this->invertory[i];
	}
}

// Operators

MateriaSource	&MateriaSource::operator= (MateriaSource const &cpy)
{
	std::cout << "MateriaSource copy assignment operator called" << std::endl;
	if (this != &cpy)
	{
		for (int i = 0; i < 4; i++)
			this->invertory[i] = cpy.invertory[i];
	}
	return (*this);
}

// Member functions

void	MateriaSource::learnMateria(AMateria *m)
{
	static int	i = 0;

	if (i < 4)
	{
		this->invertory[i] = m;
		i++;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	AMateria	*ret;

	for (int i = 0; i < 4; i++)
	{
		if (this->invertory[i]->getType() == type)
		{
			ret = this->invertory[i]->clone();
			return (ret);
		}
	}
	return (NULL);
}