/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:50:06 by mriant            #+#    #+#             */
/*   Updated: 2022/09/28 17:01:47 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

typedef void (Harl::*HarlMemberFunc)(void);

class Harl
{
private:

	void			debug(void);
	void			info(void);
	void			warning(void);
	void			error(void);
	HarlMemberFunc	funcArray[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);
};

	