/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:50:48 by mriant            #+#    #+#             */
/*   Updated: 2022/09/30 15:45:12 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"
#include "Harl.h"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::_debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my "
		<< "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
		<< std::endl;
}

void	Harl::_info(void)
{
	std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra "
		<< "bacon costs more money. You didn’t put enough bacon in my burger! "
		<< "If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some "
		<< "extra bacon for free. I’ve been coming for years whereas you "
		<< "started working here since last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to "
		<< "speak to the manager now." << std::endl;
}

void	Harl::_complain(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlMemberFunc	funcArray[4] = {&Harl::_debug, &Harl::_info,
		&Harl::_warning, &Harl::_error};
	int	i = 0;

	while (i < 4 && levels[i] != level)
		i++;
	if (i < 4)
		(this->*funcArray[i])();
	else
		std::cout << "[ Probably complaining about insignificant problems ]"
			<< std::endl;
}

void	Harl::filter(std::string level)
{	
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;
	
	while (i < 4 && levels[i] != level)
		i++;
	switch (i)
	{
		case 0:
			this->_complain("DEBUG");
		case 1:
			this->_complain("INFO");
		case 2:
			this->_complain("WARNING");
		case 3:
			this->_complain("ERROR");
		default:
			this->_complain("");
	}
}