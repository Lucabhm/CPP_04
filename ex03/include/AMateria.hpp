/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 09:59:46 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/05 12:37:28 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
# include "../include/ICharacter.hpp"

class	AMateria
{
	protected:
		std::string	type;
	public:
		AMateria(void);
		AMateria(AMateria const &cpy);
		AMateria(std::string const &type);
		virtual ~AMateria(void);
		AMateria	&operator= (AMateria const &cpy);
		std::string const	&getType(void) const;
		virtual AMateria	*clone(void) const = 0;
		virtual void	use(ICharacter &target);
};

#endif