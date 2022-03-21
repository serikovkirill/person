#include "Person.h"
#include <iostream>
Person::Person(std::string surname, std::string name, int d, int m, int y) {
	this->surname = surname;
	this->name = name;
	this->d = d;
	this->m = m;
	this->y = y;
}
Person::~Person() {
}
void Person::getFi() {
	std::cout << name << ' ' << surname;
}
void Person::getBirth() {
	if (m < 10) {
		std::cout << d << '.'<<0 << m << '.' << y;
	}
	else
	std::cout << d<<'.' << m<<'.' << y;
}
void Person::Out2() {
	getBirth();
	std::cout << ',' << ' ';
	int a, b, c, t;
	a = (14 - m) / 12;
	b = y - a;
	c = m + 12 * a - 2;
	t = 7000 + (d + b + b / 4 - b / 100 + b / 400 + (31 * c) / 12);
	if (t % 7 == 1) { std::cout << "понедельник"; }
	if (t % 7 == 2) { std::cout << "вторник"; }
	if (t % 7 == 3) { std::cout << "среда"; }//
	if (t % 7 == 4) { std::cout << "четверг"; }
	if (t % 7 == 5) { std::cout << "пятница"; }
	if (t % 7 == 6) { std::cout << "суббота"; }
	if (t % 7 == 0) { std::cout << "воскресенье"; }
}
void Person::Out1() {
	getFi();
	std::cout << ':'<<' ';
	int daycount1 = 2022 * 365 + 3 * 30 + 20;
	int daycount2 = y * 365 + m * 30 + d;
	std::cout << (daycount1 - daycount2) / 365<<' '<<"полных лет";
}
