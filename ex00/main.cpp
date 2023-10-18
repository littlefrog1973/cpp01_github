/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:32:12 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/16 15:23:51 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

Zombie* newZombie(string name);

int	main(void)
{
	Zombie	zombie1("foo");
	Zombie	*zombie2;

	zombie1.announce();
	zombie2 = newZombie("bar");
	zombie2->announce();
	delete zombie2;
	return (0);
}
