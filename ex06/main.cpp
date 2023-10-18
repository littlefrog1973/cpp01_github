/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 09:52:26 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/18 15:03:08 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

enum	LogLevel
{
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

int	main(int argc, char *argv[])
{
	Harl		harl;
	string		level;
	LogLevel	logLevel;

	if (argc != 2)
	{
		cout << "Usage: " << argv[0] << " [Filter level]" << endl;
		return (1);
	}
	level.append(argv[1]);
	logLevel = (LogLevel) harl.mapLevel(level);
	switch (logLevel)
	{
	case DEBUG:
		cout << "[ DEBUG ]" << endl;
		harl.complain("DEBUG");
		cout << "[ INFO ]" << endl;
		harl.complain("INFO");
		cout << "[ WARNING ]" << endl;
		harl.complain("WARNING");
		cout << "[ ERROR ]" << endl;
		harl.complain("ERROR");
		break ;

	case INFO:
		cout << "[ INFO ]" << endl;
		harl.complain("INFO");
		cout << "[ WARNING ]" << endl;
		harl.complain("WARNING");
		cout << "[ ERROR ]" << endl;
		harl.complain("ERROR");
		break ;

	case WARNING:
		cout << "[ WARNING ]" << endl;
		harl.complain("WARNING");
		cout << "[ ERROR ]" << endl;
		harl.complain("ERROR");
		break ;

	case ERROR:
		cout << "[ ERROR ]" << endl;
		harl.complain("ERROR");
		break ;
	default:
		cout << "[ Probably complaining about insignificant problems ]" << endl;
		break ;
	}
	return (0);
}
