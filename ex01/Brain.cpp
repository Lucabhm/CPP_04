/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 17:07:28 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/02 17:28:49 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructor

Brain::Brain(void)
{
	std::cout << "Brain default Constructor called" << std::endl;
}

Brain::Brain(Brain const &cpy)
{
	std::cout << "Brain copy Constructor called" << std::endl;
	*this = cpy;
}

// Destructor

Brain::~Brain(void)
{
	std::cout << "Brain default Destructor called" << std::endl;
}

// Operators

Brain	&Brain::operator= (Brain const &cpy)
{
	std::cout << "Brain copy assignement operator called" << std::endl;
	if (this != &cpy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = cpy.ideas[i];
	}
	return (*this);
}

// Member functions

void	Brain::setIdeas(std::string const &ideas)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = ideas[i];
}