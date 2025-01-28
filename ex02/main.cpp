#include <iostream>


int	main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string *stringPTR = &s;
	std::string &stringREF = s;

	std::cout << &s << ": string memory address" << std::endl;
	std::cout << stringPTR << ": stringPTR memory address" << std::endl;
	std::cout << &stringREF << ": stringREF memory address" << std::endl;
	std::cout << s << ": string variable" << std::endl;
	std::cout << *stringPTR << ": stringPTR variable" << std::endl;
	std::cout << stringREF << ": stringREF variable" << std::endl;
}
