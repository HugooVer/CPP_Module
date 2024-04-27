#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	;
}
ScalarConverter::ScalarConverter(ScalarConverter const &scalarconverter)
{
	(void) scalarconverter;
}
ScalarConverter::~ScalarConverter()
{
	;
}
ScalarConverter& ScalarConverter::operator= (ScalarConverter const &scalarconverter)
{
	(void) scalarconverter;
	return *this;
}

bool myIsDigit(char c)
{
	return std::isdigit(static_cast<unsigned char>(c));
}

bool myIsPrint(char ch)
{
	return std::isprint(static_cast<unsigned char>(ch));
}

int isPseudo(std::string s)
{
	std::string	pseudo[] = {"-inff", "-inf", "+inff", "+inf", "nan", "nanf"};
	for (int idx = 0; idx <= 5; ++idx)
	{
		if (idx % 2 == 0 && pseudo[idx] == s)
			return 2;
		else if (idx % 2 != 0 && pseudo[idx] == s)
			return 1;
	}
	return 0;
}

int ScalarConverter::toInt(std::string s)
{
	std::stringstream ss(s);
	int c;
	ss >> c;
	return c;
}

std::string ScalarConverter::toCharFormat(std::string s)
{
	if (charTcheck(s) == 12)
		return "Impossible";
	else if (charTcheck(s) == 2)
	{
		std::stringstream ss(s);
		int c;
		ss >> c;
		char ch = static_cast<char>(c);
		std::string st(1, ch);
		return st;
	}
	else if (charTcheck(s) == 1)
		return s;
	else
		return "Non displayable";
}

std::string ScalarConverter::toIntFormat(std::string s)
{
	if (charTcheck(s) == 12)
		return "Impossible";
	else if (intTcheck(s) == 1)
	{
		std::stringstream ss(s);
		int c;
		ss >> c;
		std::stringstream sss;
		sss << c;
		return sss.str();
	}
	else
		return "Non displayable";
}

std::string ScalarConverter::toFloatFormat(std::string s)
{
	if (floatTcheck(s) == 12)
		return s + "f";
	else if (floatTcheck(s) == 11)
		return s;
	else if (floatTcheck(s) == 1)
	{
		std::stringstream ss(s);
		float c;
		ss >> c;
		std::stringstream sss;
		sss << c;
		for (size_t idx = 0; idx <= s.size() - 1; ++idx)
		{
			if (sss.str()[idx] == '.' )
				return sss.str() + "f";
		}
		return sss.str() + ".0f";
		
	}
	else
		return "Non displayable";
}

std::string ScalarConverter::toDoubleFormat(std::string s)
{
	if (doubleTcheck(s) == 12)
		return s;
	else if (doubleTcheck(s) == 11)
		return s.substr(0, s.size()-1);
	else if (doubleTcheck(s) == 1)
	{
		std::stringstream ss(s);
		double c;
		ss >> c;
		std::stringstream sss;
		sss << c;
		// std::cout << 
		for (size_t idx = 0; idx <= s.size() - 1; ++idx)
		{
			if (sss.str()[idx] == '.' )
				return sss.str();
		}
		return sss.str() + ".0";
	}
	else
		return "Non displayable";
}

int ScalarConverter::charTcheck(std::string s)
{
	if (isPseudo(s) != 0)
		return 12;
	else if (s.size() == 1)
		return 0;
	else if (s.size() > 3)
		return 0;
	else if (myIsPrint(toInt(s)) == 1)
		return 2;
	else
		return 0;
}

int ScalarConverter::intTcheck(std::string s)
{
	if (isPseudo(s) != 0)
		return 12;
	else if (myIsDigit(s[0]) != 1 && s[0] != '+' && s[0] != '-' && s[0] != '.')
		return 0;
	else
	{
		if (s.size() == 1)
			return 1;
		for (size_t idx = 1; idx <= s.size() - 2; ++idx)
		{
			if (myIsDigit(s[idx]) != 1 && s[idx] != '.')
				return 0;
		}
		if (myIsDigit(s[s.size() - 1]) != 1 && s[s.size() - 1] != 'f')
			return 0;
	}
	return 1;
}

int ScalarConverter::floatTcheck(std::string s)
{
	if (isPseudo(s) == 2)
		return 12;
	else if (isPseudo(s) == 1)
		return 11;
	else if (myIsDigit(s[0]) != 1 && s[0] != '+' && s[0] != '-' && s[0] != '.')
		return 0;
	else
	{
		if (s.size() == 1)
			return 1;
		for (size_t idx = 1; idx <= s.size() - 2; ++idx)
		{
			if (myIsDigit(s[idx]) != 1 && s[idx] != '.')
				return 0;
		}
		if (myIsDigit(s[s.size() - 1]) != 1 && s[s.size() - 1] != 'f')
			return 0;
	}
	return 1;
}

int ScalarConverter::doubleTcheck(std::string s)
{
	if (isPseudo(s) == 2)
		return 12;
	else if (isPseudo(s) == 1)
		return 11;
	else if (myIsDigit(s[0]) != 1 && s[0] != '+' && s[0] != '-' && s[0] != '.')
		return 0;
	else
	{
		if (s.size() == 1)
			return 1;
		for (size_t idx = 1; idx <= s.size() - 2; ++idx)
		{
			if (myIsDigit(s[idx]) != 1 && s[idx] != '.')
				return 0;
		}
		if (myIsDigit(s[s.size() - 1]) != 1 && s[s.size() - 1] != 'f')
			return 0;
	}
	return 1;
}

int ScalarConverter::checkType(std::string s)
{
	std::cout << "Char\t: " << toCharFormat(s) << std::endl;
	std::cout << "Int\t: " << toIntFormat(s) << std::endl;
	std::cout << "Float\t: " << toFloatFormat(s) << std::endl;
	std::cout << "Double\t: " << toDoubleFormat(s) << std::endl;
	return 1;
}
