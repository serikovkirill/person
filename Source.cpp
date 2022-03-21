#include<iostream>
#include<string>
#include "Person.h"
#include<windows.h>
int main() {
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::string name, surname,birth;
	std::cin >> surname >> name>>birth;
	std::string d1 = birth.substr(0,2);//
	int d = stoi(d1);
	std::string m1 = birth.substr(3, 2);
	int m = stoi(m1);
	std::string y1 = birth.substr(6, 4);
	int y = stoi(y1);
	Person a(name, surname, d, m, y);
	std::cout << std::endl;
	a.Out2();
	std::cout << std::endl;
	a.Out1();
}