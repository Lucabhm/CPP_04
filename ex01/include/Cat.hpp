/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:07 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/06 08:40:43 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		std::string	type;
		Brain	*CatBrain;
	public:
		Cat(void);
		Cat(std::string type);
		Cat(Cat const &cpy);
		~Cat(void);
		Cat	&operator= (Cat const &cpy);
		void	makeSound(void) const;
		void	printBrain(void) const;
};

#endif