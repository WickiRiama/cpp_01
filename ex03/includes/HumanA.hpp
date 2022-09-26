/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:14:16 by mriant            #+#    #+#             */
/*   Updated: 2022/09/23 16:50:41 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Weapon.hpp"

class HumanA
{
private:

	std::string	_name;
	Weapon	&_weapon;

public:

	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);

	std::string	getName(void);
	Weapon	getWeapon(void);
	void	attack(void);
};