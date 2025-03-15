#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <stdexcept>

class Date{
	private:
		int _year;
		unsigned int _month;
		unsigned int _day;

	public:
		Date();
		Date(const std::string &date);
		Date(const Date &copy);
		~Date();

		bool isValid() const;

		Date &operator=(const Date &copy);
		bool operator==(const Date &other) const;
		bool operator>(const Date &other) const;
		bool operator<(const Date &other) const;
		
		std::string print() const;
};