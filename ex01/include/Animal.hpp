/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:03 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/07 10:34:08 by lbohm            ###   ########.fr       */
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
		virtual void	makeSound(void) const;
		virtual void	printBrain(void) const;
		virtual void	addIdea(std::string const &idea);
};

#endif