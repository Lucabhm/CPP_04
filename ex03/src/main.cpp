/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:24:44 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/05 16:48:27 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/IMateriaSource.hpp"
#include "../include/MateriaSource.hpp"
#include "../include/Ice.hpp"
#include "../include/Cure.hpp"
#include "../include/Character.hpp"

// int main(void)
// {
// 	IMateriaSource	*src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());
// 	ICharacter	*me = new Character("me");

// 	AMateria	*tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);
// 	ICharacter	*bob = new Character("bob");
// 	me->use(0, *bob);
// 	me->use(1, *bob);
// 	delete bob;
// 	delete me;
// 	delete src;
// 	return (0);
// }

int	main(void)
{
	IMateriaSource	*src = new MateriaSource();
	AMateria	*a = new Ice();
	AMateria	*b = new Cure();

	src->learnMateria(a);
	src->learnMateria(b);
	std::cout << std::endl;
	AMateria	*tmp;
	std::cout << std::endl;
	std::cout << "here" << std::endl;
	tmp = src->createMateria("ice");
	std::cout << std::endl;
	std::cout << "type = " << tmp->getType() << std::endl;
	std::cout << std::endl;
	tmp = src->createMateria("cure");
	std::cout << std::endl;
	std::cout << "type = " << tmp->getType() << std::endl;
	delete src;
}