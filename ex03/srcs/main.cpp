/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:07:23 by mriant            #+#    #+#             */
/*   Updated: 2022/09/23 18:01:29 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main()
{
	{
		std::cout << "=== TEST Weapon instance ===" << std::endl;
		Weapon	weapon1 = Weapon("katana");
		std::cout << "type: " << weapon1.getType() << std::endl;
		weapon1.setType("haxe");
		std::cout << "type after setType: " << weapon1.getType() << std::endl;
	}
	std::cout << std::endl;
	{
		std::cout << "=== TEST HumanA instance ===" << std::endl;
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << std::endl;
	{
		std::cout << "=== TEST HumanB instance ===" << std::endl;
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}