/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:36:58 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/05 12:28:52 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "../include/AMateria.hpp"

class	Ice : public	AMateria
{
	public:
		Ice(void);
		Ice(Ice const &cpy);
		~Ice(void);
		Ice	&operator= (Ice const &cpy);
		AMateria	*clone(void) const;
		void	use(ICharacter &target);
};


#endif