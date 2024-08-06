/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:12 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/06 08:46:41 by lbohm            ###   ########.fr       */
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
	public:
		Dog(void);
		Dog(std::string type);
		Dog(Dog const &cpy);
		~Dog(void);
		Dog	&operator= (Dog const &cpy);
		void	makeSound(void) const;
		void	printBrain(void) const;
};

#endif