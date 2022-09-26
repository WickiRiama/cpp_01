/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:57:41 by mriant            #+#    #+#             */
/*   Updated: 2022/09/23 17:38:14 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Weapon.hpp"

Weapon::Weapon(std::string type): _type(type)
{
	std::cout << this->_type << " created" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << this->_type << " destroyed" << std::endl;
}

const std::string	&Weapon::getType(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
