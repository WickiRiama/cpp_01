/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mriant <mriant@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 16:50:06 by mriant            #+#    #+#             */
/*   Updated: 2022/09/30 14:46:56 by mriant           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <string>

class Harl
{
private:

	void	_debug(void);
	void	_info(void);
	void	_warning(void);
	void	_error(void);

public:

	Harl(void);
	~Harl(void);

	void	complain(std::string level);
};

#endif
