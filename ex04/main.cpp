/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hladeiro <hladeiro@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 19:15:15 by hladeiro          #+#    #+#             */
/*   Updated: 2025/03/30 13:06:32 by hladeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include "myh.h"


static int checker (std::string s1, std::string s2, std::string file)
{

	if (s1.length() == 0 || s2.length() == 0 || file.length() == 0)
	{
		std::cerr << "String or file name with the length 0 \n";
		return (-1);
	}
	return (1);
}

static std::ifstream valid_file(std::string file){
	std::ifstream fd(file);

	if (!fd.good())
	{
		std::cerr << "File not found or bad file \n";
		exit(0);
	}
	return (fd);
}

int	main(int argv, string argc[]){
	std::string file;
	std::string s1;
	std::string s2;
	std::ifstream fd;
	std::ofstream f;

	if (argv != 4)
	{
		std::cerr << "Wrong number of arguments!!"\
				"it shoud be the following: filename string string\n";
		return (1);
	}
	file = argc[1];
	s1 = argc[2];
	s2 = argc[3];
	if (checker(s1, s2, file) == -1)
		return (1);
	fd = valid_file(file);
	f.open(file + ".replace");
	if (!f.good())
	{
		std::cerr << "Error creating outputfile, check your device space\n";
		return (fd.close(), 1);
	}
	subsitute(fd, f, s1, s2);
	fd.close();
	f.close();
}
