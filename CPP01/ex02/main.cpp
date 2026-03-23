#include <iostream>

int	main(void)
{
	std::string str;
	std::string	*strPTR;
	std::string	&strREF = str;

	str = "HI THIS IS BRAIN";
	strPTR = &str;
	std::cout << "\nmemory address of:" << std::endl;
	std::cout << "string variable: " << &str << std::endl;
	std::cout << "strPTR: " << &str << std::endl;
	std::cout << "strREF: " << &strREF << std::endl;
	std::cout << "\nContents of:" << std::endl;
	std::cout << "string variable: " << str << std::endl;
	std::cout << "strPTR: " << strPTR << std::endl;
	std::cout << "strREF: " << strREF << std::endl;
}
