/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 08:41:11 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/18 14:44:43 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	fn_ptr[0] = &Harl::debug;
	fn_ptr[1] = &Harl::info;
	fn_ptr[2] = &Harl::warning;
	fn_ptr[3] = &Harl::error;
	fn_ptr[4] = 0;
	fn_list.append("DEBUG   INFO    WARNING ERROR   ");
}

void	Harl::debug(void)
{
	cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << endl;
}

void	Harl::info(void)
{
	cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" <<endl;
}

void	Harl::warning(void)
{
	cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month."
		<< endl;
}

void	Harl::error(void)
{
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void	Harl::complain(string level)
{
	size_t	found;
	size_t	strLen;

	strLen = level.length();
	if (strLen <= 8)
		level.append(8 - strLen,' ');
	found = fn_list.find(level);
	if (found != std::string::npos && found % 8 == 0)
	{
		int	index = found / 8;
		(this->*fn_ptr[index])();
	}
	else
		cout << "Complain level was not found" << endl;
}

int	Harl::mapLevel(string level)
{
	size_t	found;
	size_t	strLen;

	strLen = level.length();
	if (strLen <= 8)
		level.append(8 - strLen,' ');
	found = fn_list.find(level);
	if (found != std::string::npos && found % 8 == 0)
	{
		int	index = found / 8;
		return (index);
	}
	else
		return (999);
}
