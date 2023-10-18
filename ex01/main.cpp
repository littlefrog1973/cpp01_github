/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:32:12 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/16 16:17:41 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

Zombie* zombieHorde(int n, string name);

int	main(void)
{
	Zombie	zombie1("foo");
	Zombie	*zombie3;

	zombie1.announce();
	zombie3 = zombieHorde(2, "frog");
	for (int i = 0; i < 2; i++)
		zombie3[i].announce();
	delete[] zombie3;
	return (0);
}
