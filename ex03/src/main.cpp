/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:24:44 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/06 15:31:50 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/Character.hpp"

int main(void)
{
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter	*me = new Character("me");

	AMateria	*tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter	*bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete me;
	delete bob;
	delete src;
	return (0);
}
