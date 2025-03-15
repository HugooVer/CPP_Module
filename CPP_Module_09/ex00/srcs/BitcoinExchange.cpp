#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy){
	*this = copy;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copy){
	this->_database = copy._database;
	return (*this);
}

BitcoinExchange::~BitcoinExchange(){
}

void BitcoinExchange::filldatabase(const std::string &filename){
	std::ifstream file;
	std::string line;

	file.open(filename.c_str(), std::ios::in);
	if (!file.is_open())
		throw std::runtime_error("failed to open database file (data.csv)");
	std::getline(file, line);
	while (std::getline(file, line)){
		size_t i = line.find(',', 0);
		Date date;
		float value;

		if (i == std::string::npos)
			throw std::runtime_error("invalid line in database");
		date = Date(line.substr(0, i));
		if (!date.isValid())
			throw std::runtime_error("invalid line in database");
		std::stringstream(line.substr(i + 1)) >> value;
		_database[date] = value;
	}
}

std::map<Date, float>::const_iterator BitcoinExchange::begin() const{
	return (_database.begin());
}

std::map<Date, float>::const_iterator BitcoinExchange::end() const{
	return (_database.end());
}