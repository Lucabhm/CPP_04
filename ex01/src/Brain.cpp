/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 17:07:28 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/06 08:38:33 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Brain.hpp"

// Constructor

Brain::Brain(void)
{
	std::cout << "Brain default Constructor called" << std::endl;
	ideas[0] = "eat";
	ideas[1] = "sleep";
	ideas[2] = "repeat";
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

void	Brain::printIdeas(void)
{
	for (int i = 0; i < 100; i++)
	{
		if (ideas[i].empty())
			break ;
		std::cout << "ideas = " << ideas[i] << std::endl;
	}
}