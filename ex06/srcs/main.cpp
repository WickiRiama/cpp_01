/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:27:00 by mriant            #+#    #+#             */
/*   Updated: 2022/09/30 13:50:02 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

#include "Harl.hpp"

int	main (void)
{
	Harl	harl;

	std::cout << std::endl << "=== DEBUG ===" << std::endl;
	harl.filter("DEBUG");
	
	std::cout << std::endl << "=== INFO ===" << std::endl;
	harl.filter("INFO");
	
	std::cout << std::endl << "=== WARINING ===" << std::endl;
	harl.filter("WARNING");
	
	std::cout << std::endl << "=== ERROR ===" << std::endl;
	harl.filter("ERROR");
	
	std::cout << std::endl << "=== WRONG LEVEL ===" << std::endl;
	harl.filter("other");
	
	std::cout << std::endl << "=== EMPTY LEVEL ===" << std::endl;
	harl.filter("");
	return (0);
}