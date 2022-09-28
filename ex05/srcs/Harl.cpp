/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:50:48 by mriant            #+#    #+#             */
/*   Updated: 2022/09/28 17:07:00 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Beware, Harl created" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl destructed" << std::endl;
}

void	Harl::complain(std::string level)
{
	
}
