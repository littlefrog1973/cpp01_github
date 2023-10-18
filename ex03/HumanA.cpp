/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:57:09 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/17 10:52:19 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

HumanA::HumanA(string h_name, Weapon &value) : weapon(value)
{
	name = h_name;
}

void	HumanA::attack()
{
	cout << name << " attacks with their " << weapon.getType() << endl;
}
