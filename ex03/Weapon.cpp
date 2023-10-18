/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 22:58:21 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/17 10:48:23 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <string>

using std::string;

Weapon::Weapon()
{
	type = "";
}

Weapon::Weapon(string arm)
{
	type = arm;
}

const string	&Weapon::getType()
{
	return (type);
}

void	Weapon::setType(string n_type)
{
	type = n_type;
}
