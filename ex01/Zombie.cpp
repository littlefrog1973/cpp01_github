/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:47:18 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/16 16:08:10 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

Zombie::Zombie()
{
	Zombie::name = "";
}

Zombie::Zombie(string name)
{
	Zombie::name = name;
}

void	Zombie::announce(void)
{
	cout << name << ": BraiiiiiinnzzzZ..." << endl;
}

Zombie::~Zombie()
{
	announce();
}
