#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <string>

class Date {
	protected:
		std::string dateString;
		std::int month;
		std::int day;
		std::int year;
	public:
		Date();
		void init(std::string dateString);
		void printDate();

};

#endif
