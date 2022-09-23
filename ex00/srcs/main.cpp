/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:43:25 by mriant            #+#    #+#             */
/*   Updated: 2022/09/23 14:33:06 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.h"

int	main(void)
{
	std::cout << "=== TEST Zombie instanciation ===" << std::endl;
	Zombie	zombie1 = Zombie("Pascal");
	zombie1.annonce();
	std::cout << std::endl;
	
	std::cout << "=== TEST newZombie() ===" << std::endl;
	Zombie	*zombie2 = newZombie("Mushu");
	zombie2->annonce();
	std::cout << std::endl;
	
	std::cout << "=== TEST randomChump() ===" << std::endl;
	randomChump("Meiko");
	std::cout << std::endl;

	std::cout << "=== TEST delete new zombie ===" << std::endl;
	zombie2->annonce();
	delete zombie2;
	std::cout << std::endl;

	std::cout << "=== Quit program ===" << std::endl;
	return (0);
}