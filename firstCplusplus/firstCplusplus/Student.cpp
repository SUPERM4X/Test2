#include <iostream>
#include <sstream>
#include <string>
#include "Student.h"
#include "Date.h" 
using namespace std;
Student::Student() {
	name = "";
	score = 0;
}

Student::Student(string newName,Date birth1,int newScore) {
	name = newName;
	score = newScore;
	birthDay = birth1;
}
void Student::setName(string newName) {
	name = newName;
}
void Student::setScore(int newScore) {
	score = newScore;
}
string Student::getName() const {
	return name;
}
int Student::getScore() const {
	return score;
}
void Student::print()  const{
	cout << name << " " ;
	birthDay.print();
	cout << score << endl;
}
void Student::setDate(int newMonth,int newDay,int newYear) {
	birthDay.setMonth(newMonth);
	birthDay.setDay(newDay);
	birthDay.setYear(newYear);
}