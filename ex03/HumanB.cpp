/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:57:09 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/17 11:55:09 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

HumanB::HumanB(string h_name)
//HumanB::HumanB(string h_name) : weapon(NULL)
{
	name = h_name;
	weapon = NULL;
}

void	HumanB::attack()
{
	cout << name << " attacks with their " << weapon->getType() << endl;
}

void	HumanB::setWeapon(Weapon &new_weapon)
{
	weapon = &new_weapon;
}

