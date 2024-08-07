/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:12 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/07 09:04:23 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		std::string	type;
		Brain	*DogBrain;
		int		pos;
	public:
		Dog(void);
		Dog(std::string type);
		Dog(Dog const &cpy);
		~Dog(void);
		Dog	&operator= (Dog const &cpy);
		void	makeSound(void) const;
		void	printBrain(void) const;
		void	addIdea(std::string const &idea);
};

#endif