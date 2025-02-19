#include "date.h"
#include <iostream>

Date::Date() {
	dateString = "";
	month = "";
	day = "";
	year = "";

} // End Constructor

void date::init(std::dateString, std::month, std::day, std::year) {
	date::dateString = dateString;
	date::month = month;
	date::day = day;
	date::year = year;

}

void date::printDate() {
	std::cout << dateString << std::endl;
	std::cout << city << std::endl;
	std::cout << day << std::endl;
	std::cout << zip << std::endl;

}
