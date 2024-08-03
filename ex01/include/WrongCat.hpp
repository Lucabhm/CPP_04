/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 16:44:32 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/03 16:59:29 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>
# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	private:
		std::string	type;
	public:
		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(WrongCat const &cpy);
		~WrongCat(void);
		WrongCat	&operator= (WrongCat const &cpy);
		void	makeSound(void) const;
};

#endif