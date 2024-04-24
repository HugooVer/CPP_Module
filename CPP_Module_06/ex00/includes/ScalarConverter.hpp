#pragma once

#include <iostream>
#include <cstdlib>

enum type{
	OTHER,
	CHAR
	INT,
	FLOAT,
	DOUBLE
};

class ScalarConverter
{
	private:
		;

	public:
		int checkType(std::string s);
};