#include <iostream>
using namespace std;
#include "Date.h"

Date::Date() {
	year = 10;
	month = 10;
}

Date::Date(int newMonth,int newDay, int newYear) {
	year = newYear;
	month = newMonth;
	day = newDay;
}

void Date::setYear(int newYear) {
	year = newYear;
}
void Date::setMonth(int newMonth) {
	month = newMonth;
}
void Date::setDay(int newDay) {
	day = newDay;
}
int Date::getYear() const {
	return year;
}
int Date::getMonth() const {
	return month;
}
int Date::getDay() const {
	return day;
}
void Date::print() const {
	cout << month << "/" << day << "/" << year << " ";
}