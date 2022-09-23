/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:10:50 by mriant            #+#    #+#             */
/*   Updated: 2022/09/23 13:58:06 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie
{
private:

	std::string	_name;

public:

	Zombie(void);
	Zombie(std::string name);
	~Zombie(void);

	void	annonce(void);
	void	setName(std::string name);
};

#endif