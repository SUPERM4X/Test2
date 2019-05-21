#pragma once
#include<string>
#include "Date.h"
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H
class Student {
private:
	string name;
	Date birthDay;
	int score;
public:
	Student();
	Student(string, Date, int);
	void setName(string);
	void setScore(int);
	string getName() const;
	int getScore() const;
	void print() const;
	void setDate(int,int,int);
};
#endif