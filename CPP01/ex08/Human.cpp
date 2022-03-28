/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psaumet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 11:07:34 by psaumet           #+#    #+#             */
/*   Updated: 2021/06/01 11:07:42 by psaumet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void			Human::meleeAttack(std::string const & target) {

	std::cout << "Melee Attack: " << target << std::endl;
	return ;
}

void			Human::rangeAttack(std::string const & target) {

	std::cout << "Range Attack: " << target << std::endl;
	return ;
}

void			Human::intimidatingShout(std::string const & target ) {

	std::cout << "IntimidatingShout: " << target << std::endl;
	return ;
}

typedef void(Human::*ptr_fct)(std::string const &);

void			Human::action(std::string const & action_name, std::string const & target) {

	std::string 		action[3] = {
		"melee",
		"range",
		"intimidate"
	};


	ptr_fct actions_ptr[3] = {
		&Human::meleeAttack,
		&Human::rangeAttack,
		&Human::intimidatingShout
	};

	for (int i = 0; i < 3; i++)
	{
		if (action[i].compare(action_name) == 0)
			(this->*actions_ptr[i])(target);
	}
	return ;
}