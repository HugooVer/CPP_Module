#include "ScalarConverter.hpp"

//  string.back()

bool my_isdigit(char c)
{
	return std::isdigit(static_cast<unsigned char>(c));
}

int ScalarConverter::checkType(std::string s)
{
	std::string	pseudo[] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	for (int idx = 0; idx <= 5; ++idx)
	{
		if (s.compare(pseudo[idx]) == 0)
			return OTHER;
	}
	int n = 0;
	for (size_t idx = 0; idx <= s.size() - 1; ++idx)
	{
		if (my_isdigit(s[idx]) != 0)
			++n;
		if (n > 3)
			return 
	}
	return 1;
}
