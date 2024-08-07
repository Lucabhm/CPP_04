/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:03 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/07 09:03:15 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
	protected:
		std::string	type;
	public:
		Animal(void);
		Animal(Animal const &cpy);
		virtual ~Animal(void);
		Animal	&operator= (Animal const &cpy);
		std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;
		virtual void	printBrain(void) const = 0;
		virtual void	addIdea(std::string const &idea) = 0;
};

#endif