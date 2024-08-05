/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:34:54 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/05 15:29:22 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "../include/IMateriaSource.hpp"

class	MateriaSource : public	IMateriaSource
{
	private:
		AMateria	*invertory[4];
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &cpy);
		~MateriaSource(void);
		MateriaSource	&operator= (MateriaSource const &cpy);
		void	learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};

#endif