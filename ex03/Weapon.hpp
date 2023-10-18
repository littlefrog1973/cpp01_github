/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 17:05:46 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/17 12:00:53 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

using std::string;

class	Weapon
{
	private:
		string	type;
	public:
	Weapon();
	Weapon(string arm);
	const string	&getType();
	void			setType(string n_type);
	~Weapon(){}
};


#endif
