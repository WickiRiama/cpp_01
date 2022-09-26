/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:53:37 by mriant            #+#    #+#             */
/*   Updated: 2022/09/23 17:34:28 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#	include <string>

class Weapon
{
private:

	std::string	_type;

public:

	Weapon(std::string type);
	~Weapon(void);
	const std::string	&getType(void);
	void				setType(std::string type);

};

#endif