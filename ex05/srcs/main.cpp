/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:47:04 by mriant            #+#    #+#             */
/*   Updated: 2022/09/30 11:52:00 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Harl.hpp"

int	main (void)
{
	Harl	harl;

	std::cout << std::endl << "=== DEBUG ===" << std::endl;
	harl.complain("DEBUG");
	
	std::cout << std::endl << "=== INFO ===" << std::endl;
	harl.complain("INFO");
	
	std::cout << std::endl << "=== WARINING ===" << std::endl;
	harl.complain("WARNING");
	
	std::cout << std::endl << "=== ERROR ===" << std::endl;
	harl.complain("ERROR");
	
	std::cout << std::endl << "=== WRONG LEVEL ===" << std::endl;
	harl.complain("other");
	
	std::cout << std::endl << "=== EMPTY LEVEL ===" << std::endl;
	harl.complain("");
	return (0);
}