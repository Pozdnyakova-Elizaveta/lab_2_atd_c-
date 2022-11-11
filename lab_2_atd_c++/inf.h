#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
class Inf {
private:
	string name;
	int age;
	string breed;
public:
	Inf(string name, int age, string breed);
	Inf(string name);
	Inf();
	~Inf();
	void read();
	void display();
	string get_name();
	Inf operator+(int i);
	Inf operator-(int i);
	friend int year_of_birthday(Inf inf);
};
