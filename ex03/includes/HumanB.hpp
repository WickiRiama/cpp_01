/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 16:20:45 by mriant            #+#    #+#             */
/*   Updated: 2022/09/26 09:30:14 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

#include "Weapon.hpp"

class HumanB
{
private:

	std::string	_name;
	Weapon	*_weapon;

public:

	HumanB(std::string name);
	~HumanB(void);

	void	attack(void);
	void	setWeapon(Weapon &weapon);
};