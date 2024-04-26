#pragma once

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

enum type{
	OTHER,
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INVALID
};

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &scalarconverter);
		~ScalarConverter();

	public:
		static int checkType(std::string s);

		static int charTcheck(std::string s);
		static int intTcheck(std::string s);
		static int floatTcheck(std::string s);
		static int doubleTcheck(std::string s);

		static int toInt(std::string s);
		static std::string toCharFormat(std::string s);
		static std::string toIntFormat(std::string s);
		static std::string toFloatFormat(std::string s);
		static std::string toDoubleFormat(std::string s);
};