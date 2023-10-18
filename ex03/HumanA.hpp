/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 23:41:12 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/17 12:00:12 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"
#include <iostream>
#include <string>

using std::string;

class	HumanA
{
	private:
		string	name;
		Weapon	&weapon;

	public:
		HumanA(string h_name, Weapon &value);
		void	attack();
		~HumanA() {}
};
