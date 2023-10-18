/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdeeyien <sukitd@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:05:39 by sdeeyien          #+#    #+#             */
/*   Updated: 2023/10/18 05:23:47 by sdeeyien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

string	replaceString(const string &original, const string &s1, const string &s2);

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" <<endl;
		return (1);
	}
	string	fileName = argv[1];
	string	s1 = argv[2];
	string	s2 = argv[3];
	string	outFileName = fileName + ".replace";
	std::ifstream inFile;
	std::ofstream outFile;

	inFile.open(fileName.c_str());
	if (!inFile.is_open())
	{
		std::cerr << "Error!, could not open input file: " << fileName << endl;
		return (2);
	}

	std::ostringstream	inputStream;
	inputStream << inFile.rdbuf();
	string	inputContent = inputStream.str();

	string	modifiedContent = replaceString(inputContent, s1, s2);

	outFile.open(outFileName.c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error!, could not open output file: " << outFileName << endl;
		return (3);
	}

	outFile << modifiedContent;
	cout << "file: " << fileName << "'s content has been replaced and saved as: " << outFileName << endl;
	inFile.close();
	outFile.close();
	return (0);
}
