/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:50:48 by mriant            #+#    #+#             */
/*   Updated: 2022/09/30 11:51:17 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"
#include "Harl.h"

Harl::Harl(void)
{
	std::cout << "Beware, Harl created" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl destructed" << std::endl;
}

void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
		<< "pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You "
		<< "didn’t put enough bacon in my burger! If you did, I wouldn’t be "
		<< "asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve "
		<< "been coming for years whereas you started working here since last "
		<< "month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now."
		<< std::endl;
}

void	Harl::complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlMemberFunc	funcArray[4] = {&Harl::debug, &Harl::info, &Harl::warning,
		&Harl::error};
	int	i = 0;

	while (i < 4 && levels[i] != level)
		i++;
	if (i < 4)
		(this->*funcArray[i])();
	else
		std::cout << "Grmmmmmblblblbl" << std::endl;
}
