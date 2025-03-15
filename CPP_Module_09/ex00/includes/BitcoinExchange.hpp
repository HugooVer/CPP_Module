#pragma once

# include <map>
# include <string>

#include "Date.hpp"

class BitcoinExchange{
	private:
		std::map<Date, float> _database;

	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &copy);
		~BitcoinExchange();

		BitcoinExchange &operator=(const BitcoinExchange &copy);

		void filldatabase(const std::string &filename);
		std::map<Date, float>::const_iterator begin() const;
		std::map<Date, float>::const_iterator end() const;
};