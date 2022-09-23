/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:43:25 by mriant            #+#    #+#             */
/*   Updated: 2022/09/23 15:16:08 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Zombie.h"

int	main(void)
{
	int	n = 10;

	std::cout << "=== TEST Zombie Hord instanciation ===" << std::endl;
	Zombie	*horde = zombieHorde(n, "Zazu");
	if (!horde)
		return (1);
	std::cout << std::endl;

	std::cout << "=== TEST Zombie Hord annonce ===" << std::endl;
	for (int i = 0; i < n; i++)
	{
		std::cout << "N." << i + 1 << " ";
		horde[i].annonce();
	}
	std::cout << std::endl;

	std::cout << "=== TEST delete new zombie ===" << std::endl;
	delete [] horde;
	std::cout << std::endl;

	std::cout << "=== Quit program ===" << std::endl;
	return (0);
}