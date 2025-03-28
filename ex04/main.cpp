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

static std::fstream valid_file(std::string file){
	std::fstream fd;

	fd.open(file.c_str());
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
	std::fstream fd;
	std::ofstream f;

	if (argv != 4)
	{
		std::cerr << "Wrong number of arguments!! it shoud be the following: filename string string\n";
		return (1);
	}
	file = argc[1];
	s1 = argc[2];
	s2 = argc[3];
	if (checker(s1, s2, file) == -1)
		return (1);
	fd = valid_file(file);
}
