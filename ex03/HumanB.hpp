/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 10:54:51 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/17 12:00:16 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <iostream>
#include <string>

using std::string;

class	HumanB
{
	private:
		string	name;
		Weapon	*weapon;

	public:
		HumanB(string h_name);
		void	attack();
		void	setWeapon(Weapon &new_weapon);
		~HumanB(){}
};

