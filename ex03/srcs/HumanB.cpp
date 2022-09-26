/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:36:46 by mriant            #+#    #+#             */
/*   Updated: 2022/09/26 09:30:32 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _weapon(0)
{
	std::cout << this->_name << " created" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " has been destroyed" << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their ";
	if (!this->_weapon)
		std::cout << "hands" << std::endl;
	else
		std::cout << this->_weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}
