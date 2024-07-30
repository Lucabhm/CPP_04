/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:12 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/30 16:17:36 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(std::string type);
		Dog(Dog const &cpy);
		~Dog(void);
		Dog	&operator= (Dog const &cpy);
		void	makeSound(void) const;
};

#endif