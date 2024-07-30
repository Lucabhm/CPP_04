/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 15:19:07 by lbohm             #+#    #+#             */
/*   Updated: 2024/07/30 16:17:53 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(std::string type);
		Cat(Cat const &cpy);
		~Cat(void);
		Cat	&operator= (Cat const &cpy);
		void	makeSound(void) const;
};

#endif