/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:35:43 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/16 16:08:40 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Zombie
{
	private:
		string	name;
	public:
	Zombie();
	Zombie(string name);
	void		announce(void);
	Zombie*		newZombie(string name);
	void		randomChump(string name);
	~Zombie();
};
#endif
