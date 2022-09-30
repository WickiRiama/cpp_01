/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 13:27:00 by mriant            #+#    #+#             */
/*   Updated: 2022/09/30 15:19:23 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdio.h>

#include "Harl.hpp"

int	main (int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./harlFilter \"level\"" << std::endl;
		return (1);
	}
	
	Harl	harl;
	harl.filter(av[1]);

	return (0);
}