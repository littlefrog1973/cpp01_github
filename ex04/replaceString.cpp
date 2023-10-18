/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replaceString.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 22:15:23 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/18 06:22:12 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

using std::string;

string	replaceString(const string &original, const string &s1, const string &s2)
{
	string	result = "";
	size_t	begin = 0;
	size_t	end = 0;

	while ((end = original.find(s1, begin)) < original.length())
	{
		result.append(original, begin, end - begin);
		result.append(s2);
		begin = end + s1.length();
	}
	result.append(original, begin, original.length());
	return (result);
}
