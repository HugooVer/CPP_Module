#include "Date.hpp"

Date::Date() : _year(0), _month(0), _day(0) {
}

Date::Date(const std::string &date){
	size_t i = 0;
	std::string year;
	std::string month;
	std::string day;

	while (i < date.size() && date[i] != '-')
		year = year + date[i++];
	++i;
	while (i < date.size() && date[i] != '-')
		month = month + date[i++];
	++i;
	while (i < date.size() && date[i] != '-')
		day = day + date[i++];
	if (year.empty() || month.empty() || day.empty())
		throw std::invalid_argument("invalid date");
	std::stringstream(year) >> _year;
	std::stringstream(month) >> _month;
	std::stringstream(day) >> _day;
}

Date::Date(const Date &copy){
	*this = copy;
}

Date::~Date(){
}

Date &Date::operator=(const Date &copy){
	this->_year = copy._year;
	this->_month = copy._month;
	this->_day = copy._day;
	return (*this);
}

bool Date::operator==(const Date &ref) const{
	return ((this->_year == ref._year)
		&& (this->_month == ref._month)
		&& (this->_day == ref._day));
}

bool Date::operator>(const Date &ref) const{
	if (this->_year == ref._year)
	{
		if (this->_month == ref._month)
			return (this->_day > ref._day);
		return (this->_month > ref._month);
	}
	return (this->_year > ref._year);
}

bool Date::operator<(const Date &ref) const{
	if (this->_year == ref._year)
	{
		if (this->_month == ref._month)
			return (this->_day < ref._day);
		return (this->_month < ref._month);
	}
	return (this->_year < ref._year);
}

std::string Date::print() const{
	std::stringstream str;

	str << std::setfill('0') << _year << "-" << std::setw(2) << _month << "-" << std::setw(2) << _day;
	return (str.str());
}

bool Date::isValid() const{
	return (_month <= 12 && _month > 0 && _day <= 31 && _day > 0);
}