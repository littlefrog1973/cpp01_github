/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 16:33:15 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/16 16:58:28 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(void)
{
	string	str = "HI THIS IS BRAIN";
	string	*stringPTR = &str;
	string	&stringREF = str;

	cout << "Address of str            = " << std::hex << &str << endl;
	cout << "Address held by stringPTR = " << std::hex << stringPTR << endl;
	cout << "Address held by stringREF = " << std::hex << &stringREF << endl;
	cout << "Value of str                  = " << str << endl;
	cout << "Value pointed to by stringPTR = " << *stringPTR << endl;
	cout << "Value pointed to by stringREF = " << stringREF << endl;
	return (0);
}
