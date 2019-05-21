#pragma once
#ifndef DATE_H
#define DATE_H
class Date {
private:
	int year;
	int month;
	int day;
public:
	Date();
	Date(int,int,int);
	void setYear(int);
	void setMonth(int);
	void setDay(int);
	int getYear() const;
	int getMonth() const;
	int getDay() const;
	void print() const;
};
#endif