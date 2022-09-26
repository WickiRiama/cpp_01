/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:26:22 by mriant            #+#    #+#             */
/*   Updated: 2022/09/23 16:50:25 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon)
{
	std::cout << this->_name << " created with " << this->_weapon.getType() << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " 
		<< this->_weapon.getType() << std::endl;
}