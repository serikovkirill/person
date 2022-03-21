#pragma once
#include<string>
class Person
{
private:
	std::string surname, name;
	int d, m, y;
public:
	Person();
	Person(std::string surname, std::string name, int d, int m, int y);//
	~Person();
	void getFi();
	void getBirth();
	void Out1();
	void Out2();
};

