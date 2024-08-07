/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbohm <lbohm@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 17:04:02 by lbohm             #+#    #+#             */
/*   Updated: 2024/08/07 09:03:52 by lbohm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain(void);
		Brain(Brain const &cpy);
		~Brain(void);
		Brain	&operator= (Brain const &cpy);
		void	printIdeas(void);
		void	addIdea(int pos, std::string const &idea);
};


#endif