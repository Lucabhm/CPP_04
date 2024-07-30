/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:03 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/30 16:19:08 by lbohm            ###   ########.fr       */
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
		Animal(std::string type);
		Animal(Animal const &cpy);
		~Animal(void);
		Animal	&operator= (Animal const &cpy);
		std::string	getType(void) const;
		void	setType(std::string type);
		void	makeSound(void) const;
};

#endif