/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:34:20 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/05 14:35:52 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "../include/ICharacter.hpp"

class	Character : public	ICharacter
{
	private:
		std::string	name;
		AMateria	*inventory[4];
	public:
		Character(void);
		Character(std::string name);
		Character(Character const &cpy);
		~Character(void);
		Character	&operator= (Character const &cpy);
		std::string const	&getName(void) const;
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
};

#endif