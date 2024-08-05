/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:37:07 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/05 12:37:08 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "../include/AMateria.hpp"

class	Cure : public	AMateria
{
	public:
		Cure(void);
		Cure(Cure const &cpy);
		~Cure(void);
		Cure	&operator= (Cure const &cpy);
		AMateria	*clone(void) const;
		void	use(ICharacter &target);
};

#endif