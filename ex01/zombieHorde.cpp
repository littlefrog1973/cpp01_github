/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:32:01 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/16 16:15:58 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

using std::string;

Zombie	*zombieHorde(int n, string name)
{
	Zombie*	horde = new Zombie[n];

	for (int i = 0; i < n; i++)
	{
		horde[i] = Zombie(name);
	}
	return (horde);
}
